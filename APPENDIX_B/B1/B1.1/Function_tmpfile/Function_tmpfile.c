#include <stdio.h>

int main()
{
	FILE *fp = tmpfile();

	if (fp == NULL) {
		perror("The temporary file is not created....\n");
	} else {

	}

	printf("The temporary file is created!\n");
	fputs("Eu sou o Alexandre!", fp);
	fclose(fp);
	printf("But the temporary file is terminated....\n");

	return 0;
}
