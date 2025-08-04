#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  HASHSIZE  101

struct nlist
{
	struct nlist *next;
	char *name;
	char *defn;
};

static struct nlist *hashtab[HASHSIZE];

unsigned int hash(char *s);
struct nlist *lookup(char *s);
char *mystrdup(char *s);
struct nlist *install(char *name, char *defn);
void undef(char *s);

int main()
{
	printf("Function \"undef\" is ready.\n");

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
