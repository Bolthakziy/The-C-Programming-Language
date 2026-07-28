#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *fp;
	int ch;
	int result = 0;

	fp = fopen("oMeuTexto.txt", "r");

	while (((ch =getc(fp)) != EOF) && (isdigit(ch))) {
		result = result * 10 + ch -'0';
	}

	if (ch != EOF) {
		ungetc(ch, fp);
	} else {

	}

	fflush(fp);
	printf("The result : %d\n", result);

	if ((ch = getc(fp)) != EOF) {
		printf("The character : %c\n", ch);
	} else {

	}

	return 0;
}
