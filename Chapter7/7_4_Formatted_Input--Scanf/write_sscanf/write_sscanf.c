#include <stdio.h>

int main()
{
	char *str = "There are 2 cats and 1 rabbit and 1 duck.";
	int catNumber, rabbitNumber, duckNumber;

	printf("%s\n", str);
	sscanf(str, "%*s%*s%d%*s%*s%d%*s%*s%d%s", &catNumber, &rabbitNumber, &duckNumber);
	printf("The number of cat : %d\n", catNumber);
	printf("The number of rabbit : %d\n", rabbitNumber);
	printf("The number of duck : %d\n", duckNumber);

	return 0;
}
