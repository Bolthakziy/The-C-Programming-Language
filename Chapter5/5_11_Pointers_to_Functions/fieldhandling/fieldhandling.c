#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define  NUMERIC    1
#define  DECR       2
#define  FOLD       4
#define  DIR        8
#define  LINES      100
#define  ALLOCSIZE  10000
#define  MAXLEN     1000
#define  MAXLINES   5000
#define  MAXSTR     100

int numcmp(char *s1, char *s2);
int charcmp(char *s, char *t);
void substr(char *s, char *t);
int mygetline(char line[], int max);
char *alloc(int n);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines, int decr);
void readargs(int argc, char *argv[]);
void myqsort(void *v[], int left, int right, int (*comp)(void*, void*));
void swap(void *v1[], int i, int j);

static char option = 0;
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
int pos1 = 0, pos2 = 0;

int main(int argc, char *argv[])
{
	char *lineptr[LINES];
	int nlines, rc = 0;

	readargs(argc, argv);

	if ((nlines = readlines(lineptr, LINES)) > 0) {
		if (option & NUMERIC) {
			qsort((void **)lineptr, 0, nlines - 1, (int (*)(void *, void *))numcmp);
		} else {
			qsort((void **)lineptr, 0, nlines - 1, (int (*)(void *, void *))charcmp);
		}

		writelines(lineptr, nlines, option & DECR);
	} else {
		printf("Input too big....\n");
		rc = -1;
	}

	return rc;
}

int numcmp(char *s1, char *s2)
{
	double v1, v2;
	char str[MAXSTR];

	substr(s1, str);
	v1 = atof(str);
	substr(s2, str);
	v2 = atof(str);

	if (v1 < v2) {
		return -1;
	} else if(v1 > v2) {
		return 1;
	} else {
		return 0;
	}
}

int charcmp(char *s, char *t)
{
	char a, b;
	int fold = (option & FOLD) ? 1 : 0, dir = (option & DIR) ? 1 : 0, i, j, endpos;

	i = j = pos1;

	if (pos2 > 0) {
		endpos = pos2;
	} else if ((endpos = strlen(s)) > strlen(t)) {
		endpos = strlen(t);
	} else {
	
	}

	do {
		if (dir) {
			while ((i < endpos) && !isalnum(s[i]) && (s[i] != ' ') && (s[i] != '\0')) {
				i++;
			}

			while ((j < endpos) && !isalnum(s[j]) && (s[j] != ' ') && (s[j] != '\0')) {
				j++;
			}
		} else {
		
		}

		if ((i < endpos) && (j < endpos)) {
			a = fold ? tolower(s[i]) : s[i];
			i++;
			b = fold ? tolower(t[j]) : t[j];
			j++;

			if ((a == b) && (a == '\0')) {
				return 0;
			} else {
		
			}
		} else {

		}
	} while ((a == b) && (i < endpos) && (j < endpos));

	return (a - b);
}

void substr(char *s, char *str)
{
	int i, j, len = strlen(s);

	if ((pos2 > 0) && (len > pos2)) {
		len = pos2;
	} else if ((pos2 > 0) && (len < pos2)) {
		printf("Error....\n");
	} else {
	
	}

	for (j = 0, i = pos1; i < len; i++, j++) {
		str[j] = s[i];
	}

	str[j] = '\0';
}

int mygetline(char line[], int lim)
{
	int c, i = 0;

	while ((--lim > 0) && ((c = getchar()) != EOF) && (c != '\n')) {
		line[i++] = c;
	}

	if (c == '\n') {
		line[i++] = c;
	} else {

	}

	line[i] = '\0';

	return i;
}

char *alloc(int n)
{
	if ((allocbuf + ALLOCSIZE - allocp) >= n) {
		allocp += n;

		return (allocp - n);
	} else {
		return 0;
	}
}

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines = 0;
	char *p, line[MAXLEN];

	while ((len = mygetline(line, MAXLEN)) > 0) {
		if ((nlines >= maxlines) || ((p = alloc(len)) == NULL)) {
			return -1;
		} else {
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}

	return nlines;
}

void writelines(char *lineptr[], int nlines, int decr)
{
	int i;

	if (decr) {
		for (i = nlines - 1; i >= 0; i--) {
			printf("%s\n", lineptr[i]);
		}
	} else {
		for (i = 0; i < nlines; i++) {
			printf("%s\n", lineptr[i]);
		}
	}
}

void readargs(int argc, char *argv[])
{
	int c;

	while ((--argc > 0) && ((c = (*++argv)[0]) == '-') || (c == '+')) {
		if ((c == '-') && (!isdigit(*(argv[0] + 1)))) {
			while (c = *++argv[0]) {
				switch (c) {
					case 'd' :
						option |= DIR;
						break;
					case 'f' :
						option |= FOLD;
						break;
					case 'n' :
						option |= NUMERIC;
						break;
					case 'r' :
						option |= DECR;
						break;
					default :
						printf("Illegal option....\n");
						break;
				}
			}
		} else if (c == '-') {
			pos2 = atoi(argv[0] + 1);
		} else if ((pos1 = atoi(argv[0] + 1)) < 0) {
			printf("Error....\n");
		} else {
		
		}
	}

	if ((argc || pos1) > pos2) {
		printf("Error....\n");
	} else {
	
	}
}

void myqsort(void *v[], int left, int right, int (*comp)(void*, void*))
{
	int i, last;
	void swap(void *v1[], int i, int j);

	if (left >= right) {
		return;
	} else {

	}

	swap(v, left, (left + right) / 2);
	last = left;

	for (i = left + 1; i <= right; i++) {
		if ((*comp)(v[i], v[left]) < 0) {
			swap(v, ++last, i);
		} else {

		}
	}

	swap(v, left, last);
	myqsort(v, left, last - 1, comp);
	myqsort(v, last + 1, right, comp);
}

void swap(void *v1[], int i, int j)
{
	void *temp;

	temp = v1[i];
	v1[i] = v1[j];
	v1[j] = temp;
}
