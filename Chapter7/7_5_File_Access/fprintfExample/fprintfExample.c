#include <stdio.h>

int main()
{
	FILE *fp;
	int argumentNumber;
	char score[] = "75 100 80";

	fp = fopen("practice.txt", "w");

	if (fp != NULL) {
		fprintf(fp, "%s\n", score);
		fclose(fp);
	} else {

	}

	return 0;
}
