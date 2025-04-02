#include <stdio.h>

int do_Multiply(register int x, register int y);

int main()
{
	int tempNum1, tempNum2;
	register int num1, num2;


	printf("Enter your 2 numbers. : ");
	scanf("%d %d", &tempNum1, &tempNum2);

	num1 = tempNum1;
	num2 = tempNum2;

	printf("The multiply of your 2 numbers is %d.\n", do_Multiply(num1, num2));


	return 0;
}

int do_Multiply(register int x, register int y)
{
	return x * y;
}
