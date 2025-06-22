#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  MAXLINES   5000
#define  ALLOCSIZE  10000
#define  MAXLEN     1000

char *lineptr[MAXLINES];
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

int mygetline(char line[], int max);
char *alloc(int n);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void myqsort(void *v[], int left, int right, int (*comp)(void*, void*));
void swap(void *v1[], int i, int j);
int numcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{
	int nlines, numeric = 0;

	if ((argc > 1) && (strcmp(argv[1], "-n") == 0)) {
		numeric = 1;
	} else {
	
	}

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		myqsort((void **)lineptr, 0, nlines - 1, (int (*)(void*, void*))(numeric ? numcmp : strcmp));
		writelines(lineptr, nlines);

		return 0;
	} else {
		printf("Input amount is too much....\n");

		return 1;
	}
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

void writelines(char *lineptr[], int nlines)
{
	while (nlines-- > 0) {
		printf("%s\n", *lineptr++);
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

int numcmp(char *s1, char *s2)
{
	double v1 = atof(s1), v2 = atof(s2);

	if (v1 < v2) {
		return -1;
	} else if(v1 > v2) {
		return 1;
	} else {
		return 0;
	}
}
