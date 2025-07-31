#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define  MAXWORD  100
#define  BUFSIZE  100

struct linklist
{
	int lnum;
	struct linklist *ptr;
};

struct tnode
{
	char *word;
	struct linklist *lines;
	struct tnode *left;
	struct tnode *right;
};

char buf[BUFSIZE];
int bufp = 0;

int getch(void);
void ungetch(int c);
int getword(char *word, int lim);
struct tnode *talloc(void);
char *mystrdup(char *s);
struct linklist *lalloc(void);
void addin(struct tnode *p, int linenum);
struct tnode *addtreex(struct tnode *p, char *w, int linenum);
void treexprint(struct tnode *p);
int noiseword(char *w);

int main()
{
	struct tnode *root;
	char word[MAXWORD];
	int linenum = 1;
	root = NULL;

	while (getword(word, MAXWORD) != EOF) {
		if (isalpha(word[0]) && (noiseword(word) == -1)) {
			root = addtreex(root, word, linenum);
		} else if (word[0] == '\n') {
			linenum++;
		}
	}

	treexprint(root);

	return 0;
}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE) {
		printf("Too many characters....\n");
	} else {
		buf[bufp++] = c;
	}
}

int getword(char *word, int lim)
{
	int c;
	char *w = word;

	while (isspace(c = getch()));

	if (c != EOF) {
		*w++ = c;
	} else {

	}

	if (!isalpha(c)) {
		*w = '\0';

		return c;
	} else {

	}

	for (; --lim > 0; w++) {
		if (!isalnum(*w = getch())) {
			ungetch(*w);
			break;
		} else {

		}
	}

	*w = '\0';

	return word[0];
}

struct tnode *talloc(void)
{
	return (struct tnode *)malloc(sizeof(struct tnode));
}

char *mystrdup(char *s)
{
	char *p;

	p = (char *)malloc(strlen(s) + 1);

	if (p != NULL) {
		strcpy(p, s);
	} else {
	
	}

	return p;
}

struct linklist *lalloc(void)
{
	return (struct linklist *)malloc(sizeof(struct linklist));
}

void addin(struct tnode *p, int linenum)
{
	struct linklist *temp;
	temp = p->lines;

	while ((temp->ptr != NULL) && (temp->lnum != linenum)) {
		temp = temp->ptr;
	}

	if (temp->lnum != linenum) {
		temp->ptr = lalloc();
		temp->ptr->lnum = linenum;
		temp->ptr->ptr = NULL;
	} else {
	
	}
}

struct tnode *addtreex(struct tnode *p, char *w, int linenum)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = mystrdup(w);
		p->lines = lalloc();
		p->lines->lnum = linenum;
		p->lines->ptr = NULL;
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w, p->word)) == 0) {
		addin(p, linenum);
	} else if (cond < 0) {
		p->left = addtreex(p->left, w, linenum);
	} else {
		p->right = addtreex(p->right, w, linenum);
	}

	return p;
}

void treexprint(struct tnode *p)
{
	struct linklist *temp;

	if (p != NULL) {
		treexprint(p->left);
		printf("%10s : ", p->word);

		for (temp = p->lines; temp != NULL; temp = temp->ptr) {
			printf("%4d ", temp->lnum);
		}
		printf("\n");

		treexprint(p->right);
	} else {
	
	}
}

int noiseword(char *w)
{
	static char *nw[] = {
		"a",
		"an",
		"and",
		"are",
		"in",
		"is",
		"of",
		"or",
		"that",
		"the",
		"this",
		"to"
	};
	int cond, mid, low = 0, high = sizeof(nw) / sizeof(char *) - 1;

	while (low <= high) {
		mid = (low + high) / 2;

		if ((cond = strcmp(w, nw[mid])) < 0) {
			high = mid - 1;
		} else if (cond > 0) {
			low = mid + 1;
		} else {
			return mid;
		}
	}

	return -1;
}
