#include <stdio.h>

typedef int (*PTF)(int x, int y);

int add_2Numbers(int x, int y);
int subtract_2Numbers(int x, int y);
int multiply_2Numbers(int x, int y);
int divide_2Numbers(int x, int y);

int main()
{
	int x, y;
	PTF expression;

	printf("Input your 2 numbers. : ");
	scanf("%d %d", &x, &y);

	expression = add_2Numbers;
	printf("\n\n\n%d + %d = %d\n", x, y, expression(x, y));
	expression = subtract_2Numbers;
	printf("%d - %d = %d\n", x, y, expression(x, y));
	expression = multiply_2Numbers;
	printf("%d x %d = %d\n", x, y, expression(x, y));
	expression = divide_2Numbers;
	printf("%d ÷ %d = %d\n", x, y, expression(x, y));

	return 0;
}

int add_2Numbers(int x, int y)
{
	return (x + y);
}

int subtract_2Numbers(int x, int y)
{
	return (x - y);
}

int multiply_2Numbers(int x, int y)
{
	return x * y;
}

int divide_2Numbers(int x, int y)
{
	return x / y;
}
