#include <stdio.h>
#include <string.h>

char *myfgets(char *s, int n, FILE *iop);
int mygetline(char *line, int max);

int main()
{
	char str[32];
	int result = mygetline(str, 32);

	if (result > 0) {
		printf("%s\n", str);
	} else {

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

int mygetline(char *line, int max)
{
	if (myfgets(line, max, stdin) == NULL) {
		return 0;
	} else {
		return strlen(line);
	}
}
