#include <stdio.h>

int main()
{
	FILE *fp = fopen("texto.txt", "w");

	fprintf(fp, "Eu sou o Alexandre!\n");
	fclose(fp);

	return 0;
}
