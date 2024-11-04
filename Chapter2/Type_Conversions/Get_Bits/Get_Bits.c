#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int convert_BinaryNumber(int x);

int main()
{
	int num, startingBit, bitNumber;

	printf("Enter your number. : ");
	scanf("%d", &num);
	printf("\n\n\nYour number in decimal format : %d\n", num);
	printf("Your number in binary format : %d\n", convert_BinaryNumber(num));
	printf("Enter the starting bit and the number of bits you want to know.\n");
	printf("The starting bit : ");
	scanf("%d", &startingBit);
	printf("The number of bits : ");
	scanf("%d", &bitNumber);
	printf("The bits that you want to know : %d\n", convert_BinaryNumber(getbits(num, startingBit, bitNumber)));

	return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p - n + 1)) & ~(~0 << n);
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
