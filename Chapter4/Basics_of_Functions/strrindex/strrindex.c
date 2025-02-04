#include <stdio.h>

#define  MAXLINE  1000

int myGetLine(char line[], int max);
int strrindex(char source[], char target[]);

char seek[] = "Laura";

int main()
{
	char line[MAXLINE];

	while (myGetLine(line, MAXLINE) > 0) {
		if (strrindex(line, seek) >= 0) {
			printf("The word you want is at %d position.\n", strrindex(line, seek));
		} else {
			printf("I am sorry there is no word you want to seek....\n");
		}
	}

	return 0;
}

int myGetLine(char line[], int max)
{
	char ch;
	int i = 0;

	while (--max > 0 && (ch = getchar()) != EOF && ch != '\n') {
		line[i++] = ch;
	}

	if (ch == '\n') {
		line[i++] = ch;
	} else {

	}

	line[i] = '\0';

	return i;
}

int strrindex(char source[], char target[])
{
	int i, j, k, pos = -1;

	for (i = 0; source[i] != '\0'; i++) {
		for (j = i, k = 0; target[k] != '\0' && source[j] == target[k]; j++, k++) {
			;
		}

		if (k > 0 && target[k] == '\0') {
			pos = i;
		}
	}

	return pos;
}
