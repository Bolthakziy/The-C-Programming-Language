#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "En kanin og to katte";
	int length;

	printf("STR : %s\n", str);
	length = strlen(str);
	printf("Length : %d\n", length);
	printf("Last character of \'STR\' : %c\n", str[length - 1]);

	return 0;
}
