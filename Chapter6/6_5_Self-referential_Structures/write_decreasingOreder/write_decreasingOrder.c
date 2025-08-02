#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define  MAXWORD    100
#define  BUFSIZE    100
#define  NDISTINCT  1000

struct tnode
{
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

char buf[BUFSIZE];
int bufp = 0, ntn = 0;
struct tnode *list[NDISTINCT];

struct tnode *talloc(void);
char *mystrdup(char *s);
struct tnode *addtree(struct tnode *p, char *w);
int getch(void);
void ungetch(int c);
int getword(char *word, int lim);
void sortlist(void);
void treestore(struct tnode *p);

int main()
{
	struct tnode *root;
	char word[MAXWORD];
	int i;
	root = NULL;

	while (getword(word, MAXWORD) != EOF) {
		if (isalpha(word[0])) {
			root = addtree(root, word);
		} else {
		
		}
	}

	treestore(root);
	sortlist();

	for (i = 0; i < ntn; i++) {
		printf("%2d : %20s\n", list[i]->count, list[i]->word);
	}

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

void sortlist(void)
{
	int gap, i, j;
	struct tnode *temp;

	for (gap = ntn / 2; gap > 0; gap /= 2) {
		for (i = gap; i < ntn; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				if ((list[j]->count) >= (list[j + gap]->count)) {
					break;
				} else {
				
				}

				temp = list[j];
				list[j] = list[j + gap];
				list[j + gap] = temp;
			}
		}
	}
}

void treestore(struct tnode *p)
{
	if (p != NULL) {
		treestore(p->left);

		if (ntn < NDISTINCT) {
			list[ntn++] = p;
		} else {
		
		}

		treestore(p->right);
	} else {
	
	}
}
