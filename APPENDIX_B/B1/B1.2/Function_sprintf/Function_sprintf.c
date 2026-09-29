#include <stdio.h>

int main()
{
	char str[64];
	int x = 3, y = 7;

	sprintf(str, "Alexandre tem %d coelhos e Henrique tem %d patos.", x, y);
	printf("%s\n", str);

	return 0;
}
