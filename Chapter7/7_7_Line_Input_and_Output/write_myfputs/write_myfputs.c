#include <stdio.h>

int myfputs(char *s, FILE *iop);

int main()
{
	FILE *fp;
	int result;
	char *str = "En kanin og en and";

	fp = fopen("practice.txt", "w");

	if (fp != NULL) {
		result = myfputs(str, fp);

		if (result != EOF) {
			printf("Good job!\n");
		} else {
			printf("Error....\n");
		}

		fclose(fp);
	} else {

	}

	return 0;
}

int myfputs(char *s, FILE *iop)
{
	char ch;

	while (ch = *s++) {
		putc(ch, iop);
	}

	return (ferror(iop) ? EOF : 0);
}
