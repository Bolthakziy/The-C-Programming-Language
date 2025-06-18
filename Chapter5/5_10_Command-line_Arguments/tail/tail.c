#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  DEFLINES  10
#define  LINES     100
#define  MAXLEN    100

int myGetline(char line[], int max);
void error(char *str);

int main(int argc, char *argv[])
{
	char *p, *buf, *bufend;
	char line[MAXLEN];
	char *lineptr[LINES];
	int first, i, last, len, n, nlines;

	if (argc == 1) {
		n = DEFLINES;
	} else if ((argc == 2) && ((*++argv)[0] == '-')) {
		n = atoi(argv[0] + 1);
	} else {
		error("tail error....\n");
	}

	if ((n < 1) || (n > LINES)) {
		n = LINES;
	} else {
	
	}

	for (i = 0; i < LINES; i++) {
		lineptr[i] = NULL;
	}

	if ((p = buf = malloc(LINES * MAXLEN)) == NULL) {
		error("\'tail\' can not allocate buf....\n");
	} else {
	
	}

	bufend = buf + LINES * MAXLEN;
	last = 0;
	nlines = 0;

	while ((len = myGetline(line, MAXLEN)) > 0) {
		if (p + len + 1 >= bufend) {
			p = buf;
		} else {
		
		}

		lineptr[last] = p;
		strcpy(lineptr[last], line);

		if (++last >= LINES) {
			last = 0;
		} else {
		
		}

		p += len + 1;
		nlines++;
	}

	if (n > nlines) {
		n = nlines;
	} else {
	
	}

	first = last - n;

	if (first < 0) {
		first += LINES;
	} else {
	
	}

	for (i = first; n-- > 0; i = (i + 1) % LINES) {
		printf("%s", lineptr[i]);
	}

	return 0;
}

int myGetline(char line[], int max)
{
	int c, i = 0;

	while ((--max > 0) && ((c = getchar()) != EOF) && (c != '\n')) {
		line[i++] = c;
	}

	if (c == '\n') {
		line[i++] = c;
	} else {
	
	}

	line[i] = '\0';

	return i;
}

void errer(char *str)
{
	printf("%s\n", str);
	exit(1);
}
