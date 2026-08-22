#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IOFBF, 8);
	printf("Eu sou o Alexandre!\n");

	return 0;
}
