#include <stdio.h>
#include <string.h>

#define  MAXLINE  1000

int myGetline(char line[], int max);

int main(int argc, char *argv[])
{
	char line[MAXLINE];
	int found = 0;

	if (argc != 2) {
		printf("Usage : find pattern\n");
	} else {
		while (myGetline(line, MAXLINE) > 0) {
			if (strstr(line, argv[1]) != NULL) {
				printf("%s", line);
				found++;
			} else {
			
			}
		}
	}

	return found;
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
