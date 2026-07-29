#include <stdio.h>

int main()
{
	FILE *fp = fopen("meuTexto.txt", "w");

	fprintf(fp, "Ele e o meu amigo, Arthur!\n");
	fclose(fp);

	return 0;
}
