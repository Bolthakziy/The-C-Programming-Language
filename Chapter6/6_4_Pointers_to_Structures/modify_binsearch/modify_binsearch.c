#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define  MAXWORD  100
#define  BUFSIZE  100
#define  NKEYS    (sizeof(keytab) / sizeof(struct key))

char buf[BUFSIZE];
int bufp = 0;

struct key
{
	char *word;
	int count;
} keytab[] = {
	"auto", 0,
	"break", 0,
	"case", 0,
	"char", 0,
	"const", 0,
	"continue", 0,
	"default", 0,
	"unsigned", 0,
	"void", 0,
	"volatile", 0,
	"while", 0
};

int getch(void);
void ungetch(int c);
int getword(char *word, int lim);
struct key *binsearch(char *word, struct key *tab, int n);

int main()
{
	struct key *p;
	char word[MAXWORD];

	while (getword(word, MAXWORD) != EOF) {
		if (isalpha(word[0])) {
			if ((p = binsearch(word, keytab, NKEYS)) != NULL) {
				p->count++;
			} else {
			
			}
		} else {
		
		}
	}

	for (p = keytab; p < keytab + NKEYS; p++) {
		if (p->count > 0) {
			printf("%4d %s\n", p->count, p->word);
		} else {
		
		}
	}

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

struct key *binsearch(char *word, struct key *tab, int n)
{
	int cond;
	struct key *low = &tab[0], *high = &tab[n], *mid;

	while (low < high) {
		mid = low + (high - low) / 2;

		if ((cond = strcmp(word, mid->word)) < 0) {
			high = mid;
		} else if (cond > 0) {
			low = mid + 1;
		} else {
			return mid;
		}
	}

	return NULL;
}
