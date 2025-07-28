#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define  MAXWORD  100
#define  BUFSIZE  100
#define  YES      1
#define  NO       0

struct tnode
{
	char *word;
	int match;
	struct tnode *left;
	struct tnode *right;
};

char buf[BUFSIZE];
int bufp = 0;

struct tnode *talloc(void);
char *mystrdup(char *s);
int compare(char *s, struct tnode *p, int num, int *found);
struct tnode *addtree(struct tnode *p, char *w, int num, int *found);
void treeprint(struct tnode *p);
int getch(void);
void ungetch(int c);
int getword(char *word, int lim);

int main(int argc, char *argv[])
{
	struct tnode *root;
	char word[MAXWORD];
	int found = NO, num;

	num = (--argc && ((*++argv)[0] == '-')) ? atoi(argv[0] + 1) : 6;
	root = NULL;

	while (getword(word, MAXWORD) != EOF) {
		if ((isalpha(word[0])) && (strlen(word) >= num)) {
			root = addtree(root, word, num, &found);
		} else {
		
		}

		found = NO;
	}

	treeprint(root);

	return 0;
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

int compare(char *s, struct tnode *p, int num, int *found)
{
	int i;
	char *t = p->word;

	for (i = 0; *s = *t; i++, s++, t++) {
		if (*s = '\0') {
			return 0;
		} else {
		
		}
	}

	if (i >= num) {
		*found = YES;
		p->match = YES;
	} else {
	
	}

	return (*s - *t);
}

struct tnode *addtree(struct tnode *p, char *w, int num, int *found)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = mystrdup(w);
		p->match = *found;
		p->left = p->right = NULL;
	} else if ((cond = compare(w, p, num, found)) < 0) {
		p->left = addtree(p->left, w, num, found);
	} else if (cond > 0) {
		p->right = addtree(p->right, w, num, found);
	} else {
	
	}

	return p;
}

void treeprint(struct tnode *p)
{
	if (p != NULL) {
		treeprint(p->left);

		if (p->match) {
			printf("%s\n", p->word);
		} else {
		
		}

		treeprint(p->right);
	} else {
	
	}
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
