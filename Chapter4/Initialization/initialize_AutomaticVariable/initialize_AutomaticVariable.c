#include <stdio.h>

int do_Combination(int x);

int main()
{
	int number;

	printf("Let\'s get the value, \'some number Combination 3\'.\n");
	printf("Input your number. But your number has to be bigger than 2!\n");
	printf("Please enter. : ");
	scanf("%d", &number);
	printf("The value is %d\n", do_Combination(number));

	return 0;
}

int do_Combination(int x)
{
	int a = x - 1, b = x - 2;

	return ((x * a * b) / 6);
}
