#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define  MAXWORD  100
#define  BUFSIZE  100

struct tnode
{
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

char buf[BUFSIZE];
int bufp = 0;

struct tnode *talloc(void);
char *mystrdup(char *s);
struct tnode *addtree(struct tnode *p, char *w);
void treeprint(struct tnode *p);
int getch(void);
void ungetch(int c);
int getword(char *word, int lim);

int main()
{
	struct tnode *root;
	char word[MAXWORD];

	root = NULL;

	while (getword(word, MAXWORD) != EOF) {
		if (isalpha(word[0])) {
			root = addtree(root, word);
		} else {

		}
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

struct tnode *addtree(struct tnode *p, char *w)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = mystrdup(w);
		p->count = 1;
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w, p->word)) == 0) {
		p->count++;
	} else if (cond < 0) {
		p->left = addtree(p->left, w);
	} else {
		p->right = addtree(p->right, w);
	}

	return p;
}

void treeprint(struct tnode *p)
{
	if (p != NULL) {
		treeprint(p->left);
		printf("%4d %s\n", p->count, p->word);
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
