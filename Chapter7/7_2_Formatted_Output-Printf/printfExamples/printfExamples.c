#include <stdio.h>

int main()
{
	char *str = "En kanin og en and";

	printf("%.*s\n", 8, str);
	printf("%s\n", str);
	printf("%10s\n", str);
	printf("%.10s\n", str);
	printf("%20.10s\n", str);
	printf("%-20.10s\n", str);

	return 0;
}
