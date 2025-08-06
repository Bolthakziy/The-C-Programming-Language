#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define  HASHSIZE  101
#define  BUFSIZE   100
#define  MAXWORD   100

struct nlist
{
	struct nlist *next;
	char *name;
	char *defn;
};

static struct nlist *hashtab[HASHSIZE];
char buf[BUFSIZE];
int bufp = 0;

unsigned int hash(char *s);
struct nlist *lookup(char *s);
char *mystrdup(char *s);
struct nlist *install(char *name, char *defn);
void undef(char *s);
int getch(void);
void ungetch(int c);
void ungets(char s[]);
int getword(char *word, int lim);
void error(int c, char *s);
void skipblanks(void);
void getdef(void);

int main()
{
	char w[MAXWORD];
	struct nlist *p;

	while (getword(w, MAXWORD) != EOF) {
		if (strcmp(w, "#") == 0) {
			getdef();
		} else if (!isalpha(w[0])) {
			printf("%s", w);
		} else if ((p = lookup(w)) == NULL) {
			printf("%s", w);
		} else {
			ungets(p->defn);
		}
	}

	return 0;
}

unsigned int hash(char *s)
{
	unsigned int hashval;

	for (hashval = 0; *s != '\0'; s++) {
		hashval = *s + 31 * hashval;
	}

	return (hashval % HASHSIZE);
}

struct nlist *lookup(char *s)
{
	struct nlist *np;

	for (np = hashtab[hash(s)]; np != NULL; np = np->next) {
		if (strcmp(s, np->name) == 0) {
			return np;
		} else {
		
		}
	}

	return NULL;
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

struct nlist *install(char *name, char *defn)
{
	struct nlist *np;
	unsigned int hashval;

	if ((np = lookup(name)) == NULL) {
		np = (struct nlist *)malloc(sizeof(*np));

		if ((np == NULL) || ((np->name = mystrdup(name)) == NULL)) {
			return NULL;
		} else {
		
		}

		hashval = hash(name);
		np->next = hashtab[hashval];
		hashtab[hashval] = np;
	} else {
		free((void *)np->defn);
	}

	if ((np->defn = mystrdup(defn)) == NULL) {
		return NULL;
	} else {
	
	}

	return np;
}

void undef(char *s)
{
	int h;
	struct nlist *prev, *np;

	prev = NULL;
	h = hash(s);

	for (np = hashtab[h]; np != NULL; np = np->next) {
		if (strcmp(s, np->name) == 0) {
			break;
		} else {
		
		}

		prev = np;
	}

	if (np != NULL) {
		if (prev == NULL) {
			hashtab[h] = np->next;
		} else {
			prev->next = np->next;
		}

		free((void *)np->name);
		free((void *)np->defn);
		free((void *)np);
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

void ungets(char s[])
{
	int len = strlen(s);

	while (len > 0) {
		ungetch(s[--len]);
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

void skipblanks(void)
{
	int c;

	while (((c = getch()) == ' ') || (c == '\t'));
	ungetch(c);
}

void error(int c, char *s)
{
	printf("Error : %s\n", s);

	while ((c != EOF) && (c != '\n')) {
		c = getch();
	}
}

void getdef(void)
{
	int c, i;
	char def[MAXWORD], dir[MAXWORD], name[MAXWORD];
	skipblanks();

	if (!isalpha(getword(dir, MAXWORD))) {
		error(dir[0], "After \'#\'....");
	} else if (strcmp(dir, "define") == 0) {
		skipblanks();

		if (!isalpha(getword(name, MAXWORD))) {
			error(name[0], "Non alpha-name is expected....");
		} else {
			skipblanks();

			for (i = 0; i < MAXWORD - 1; i++) {
				if (((def[i] = getch()) == EOF) || (def[i] == '\n')) {
					break;
				} else {
				
				}
			}

			def[i] = '\0';

			if (i <= 0) {
				error('\n', "Incomplete definition....");
			} else {
				install(name, def);
			}
		}
	} else if (strcmp(dir, "undef") == 0) {
		skipblanks();

		if (!isalpha(getword(name, MAXWORD))) {
			error(name[0], "Non-alpha is in \'undef\'....");
		} else {
			undef(name);
		}
	} else {
		error(dir[0], "After \'#\'....");
	}
}
