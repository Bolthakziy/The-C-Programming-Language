#include <stdio.h>
#include <string.h>

#define  MAXLINES   5000
#define  ALLOCSIZE  10000
#define  MAXLEN     1000

char *lineptr[MAXLINES];
char allocbuf[ALLOCSIZE];
char *allocp = allocbuf;

int mygetline(char *s, int lim);
char *alloc(int n);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void swap(char *v[], int i, int j);
void qsort(char *v[], int left, int right);

int main()
{
	int nlines;

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);

		return 0;
	} else {
		printf("Error : Input too big to sort.\n");

		return 1;
	}
}

int mygetline(char *s, int lim)
{
	int c, i = 0;

	while ((--lim > 0) && (((c = getchar()) != EOF) && (c != '\n'))) {
		*(s + i) = c;
		i++;
	}

	if (c == '\n') {
		*(s + i) = c;
		i++;
	} else {
	
	}

	*(s + i) = '\0';

	return i;
}

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n;

		return allocp - n;
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
	int i;

	for (i = 0; i < nlines; i++) {
		printf("%s\n", lineptr[i]);
	}
}

void swap(char *v[], int i, int j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right) {
		return;
	} else {
	
	}

	swap(v, left, (left + right) / 2);
	last = left;

	for (i = left + 1; i <= right; i++) {
		if (strcmp(v[i], v[left]) < 0) {
			swap(v, ++last, i);
		} else {
		
		}
	}

	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}
