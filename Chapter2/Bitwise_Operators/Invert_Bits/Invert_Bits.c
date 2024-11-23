#include <stdio.h>

unsigned invert_Bits(unsigned x, int p, int n);
int convert_BinaryNumber(int x);

int main()
{
	int number, startingBit, bits;

	printf("Enter your number which you want to change. : ");
	scanf("%d", &number);
	printf("\n\n\nYour number in decimal format :  %d\n", number);
	printf("Your number in binary format : %d\n\n\n", convert_BinaryNumber(number));

	printf("Enter the starting bit and the number of bits you want to change.\n");
	printf("The starting bit : ");
	scanf("%d", &startingBit);
	printf("The number of bits : ");
	scanf("%d", &bits);
	printf("The bits after operation : %d\n", convert_BinaryNumber(invert_Bits(number, startingBit, bits)));

	return 0;
}

unsigned invert_Bits(unsigned x, int p, int n)
{
	return (x ^ (~(~0 << n) << (p - n + 1)));
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
