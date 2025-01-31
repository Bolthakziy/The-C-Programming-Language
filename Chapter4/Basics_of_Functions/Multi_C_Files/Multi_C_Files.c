#include <stdio.h>
#include "myGetLine.h"
#include "strindex.h"

#define  MAXLINE  1000

char sentence[] = "Kat";

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (myGetLine(line, MAXLINE) > 0) {
		if (strindex(line, sentence) >= 0) {
			printf("%s", line);
			found++;
		} else {

		}
	}

	return found;
}
