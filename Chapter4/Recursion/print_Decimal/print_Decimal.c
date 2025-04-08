#include <stdio.h>

void print_Decimal(int number);

int main()
{
	int n;

	printf("Input your number. : ");
	scanf("%d", &n);
	printf("Your number is transformed to a below string.\n");
	print_Decimal(n);
	printf("\n");

	return 0;
}

void print_Decimal(int number)
{
	if (number < 0) {
		putchar('-');
		number = -number;
	} else {

	}

	if (number / 10) {
		print_Decimal(number / 10);
	} else {

	}

	putchar(number % 10 + '0');
}
