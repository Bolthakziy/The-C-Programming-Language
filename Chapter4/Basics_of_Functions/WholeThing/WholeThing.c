#include <stdio.h>
#define  MAXLINE  1000

int myGetLine(char line[], int lim);
int strindex(char source[], char target[]);

char pattern[] = "Kanin";

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (myGetLine(line, MAXLINE) > 0) {
		if (strindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		} else {

		}
	}

	return found;
}

int myGetLine(char line[], int lim)
{
	char c;
	int i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		line[i++] = c;
	}

	if (c == '\n') {
		line[i++] = c;
	} else {

	}

	line[i] = '\0';

	return i;
}

int strindex(char source[], char target[])
{
	int i, j, k;

	for (i = 0; source[i] != '\0'; i++) {
		for (j = i, k = 0; target[k] != '\0' && source[j] == target[k]; j++, k++) {
			;
		}

		if (k > 0 && target[k] == '\0') {
			return i;
		} else {

		}
	}

	return -1;
}
