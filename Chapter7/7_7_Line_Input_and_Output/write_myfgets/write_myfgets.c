#include <stdio.h>
#include <stdlib.h>

char *myfgets(char *s, int n, FILE *iop);

int main()
{
	FILE *fp;
	char str[32];

	fp = fopen("practice.txt", "r");

	if (fp == NULL) {
		printf("It fails to open the file....\n");
		exit(0);
	} else {
		myfgets(str, 32, fp);
		puts(str);
		fclose(fp);
	}

	return 0;
}

char *myfgets(char *s, int n, FILE *iop)
{
	register char c;
	register char *cs = s;

	while ((--n > 0) && ((c = getc(iop)) != EOF)) {
		if ((*cs++ = c) == '\n') {
			break;
		} else {

		}
	}

	*cs = '\0';

	return (((c == EOF) && (cs == s)) ? NULL : s);
}
