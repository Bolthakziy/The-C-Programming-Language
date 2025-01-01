#include <stdio.h>

int display_x(int x);

int main()
{
	int x = 1000;
	printf("The value of \'x\' before entering the block. : %d\n", x);

	{
		int x = 10;
		printf("The value of \'x\' in the block. : %d\n", x);
	}

	printf("The value of \'x\' after passing the block. : %d\n", x);
	printf("And the value of \'x\' before entering the function. : %d\n", x);
	display_x(x);
	printf("The value of \'x\' after passing the function. : %d\n", x);

	return 0;
}

int display_x(int x)
{
	x *= 3;
	printf("The value of \'x\' in the function. : %d\n", x);

	return x;
}
