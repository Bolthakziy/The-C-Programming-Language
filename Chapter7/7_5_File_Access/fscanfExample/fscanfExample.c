#include <stdio.h>

int main()
{
	FILE *fp;
	int Korean, Math, English, subject;

	fp = fopen("practice.txt", "r");

	if (fp != NULL) {
		subject = fscanf(fp, "%d %d %d", &Korean, &Math, &English);
		printf("The number of subjects : %d\n", subject);
		printf("The score of Korean : %d\n", Korean);
		printf("The score of Math : %d\n", Math);
		printf("The score of English : %d\n", English);
		fclose(fp);
	} else {

	}

	return 0;
}
