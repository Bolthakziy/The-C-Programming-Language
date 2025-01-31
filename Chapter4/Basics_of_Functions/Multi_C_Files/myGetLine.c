#include <stdio.h>
#include "myGetLine.h"

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
