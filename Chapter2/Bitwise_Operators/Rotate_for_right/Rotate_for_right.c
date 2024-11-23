#include <stdio.h>

unsigned rotate_Number(unsigned x, int n);
int convert_BinaryNumber(int x);

int main()
{
	int number, bits;

	printf("Enter your number which you want to change. : ");
	scanf("%d", &number);
	printf("\n\n\nYour number in decimal format :  %d\n", number);
	printf("Your number in binary format : %d\n\n\n", convert_BinaryNumber(number));

	printf("Enter the number of bits you want to move.\n");
	printf("The number of bits that will move : ");
	scanf("%d", &bits);
	printf("The bits after operation : %d\n", convert_BinaryNumber(rotate_Number(number, bits)));

	return 0;
}

unsigned rotate_Number(unsigned x, int n)
{
	return (x >> n);
}

int convert_BinaryNumber(int x)
{
	int binaryNumber = 0, digit = 1, reminder;

	while (x != 0) {
		reminder = x % 2;
		binaryNumber = binaryNumber + reminder * digit;
		digit *= 10;
		x /= 2;
	}

	return binaryNumber;
}
