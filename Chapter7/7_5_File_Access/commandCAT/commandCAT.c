#include <stdio.h>

void filecopy(FILE *ifp, FILE *ofp);

int main(int argc, char *argv[])
{
	FILE *fp;

	if (argc == 1) {
		filecopy(stdin, stdout);
	} else {
		while (--argc > 0) {
			if ((fp = fopen(*++argv, "r")) == NULL) {
				printf("I can not ope \"%s\"\n", *argv);
			} else {
				filecopy(fp, stdout);
				fclose(fp);
			}
		}
	}

	return 0;
}

void filecopy(FILE *ifp, FILE *ofp)
{
	char c;

	while ((c = getc(ifp)) != EOF) {
		putc(c, ofp);
	}
}
