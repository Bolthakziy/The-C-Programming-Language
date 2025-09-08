#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *cp = (char*)malloc(16);

	printf("Hva heter du? : ");
	scanf("%[^\n]%*c", cp);
	printf("Jeg er %s\n", cp);
	free(cp);

	return 0;
}
