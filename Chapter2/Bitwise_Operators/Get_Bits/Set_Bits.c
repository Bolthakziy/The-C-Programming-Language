#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
int convert_BinaryNumber(int x);

int main()
{
	int number, startingBit, bits, referenceNumber;

	printf("Enter your number which you want to change. : ");
	scanf("%d", &number);
	printf("\n\n\nYour number in decimal format : %d\n", number);
	printf("Your number in binary format : %d\n\n\n", convert_BinaryNumber(number));
	printf("Enter your reference number. : ");
	scanf("%d", &referenceNumber);
	printf("\n\n\nYour reference in decimal format : %d\n", referenceNumber);
	printf("Your reference number in binary format : %d\n\n\n", convert_BinaryNumber(referenceNumber));

	printf("Enter the starting bit and the number of bits you want to change.\n");
	printf("The starting bit : ");
	scanf("%d", &startingBit);
	printf("The number of bits : ");
	scanf("%d", &bits);
	printf("The bits after operation : %d\n", convert_BinaryNumber(setbits(number, startingBit, bits, referenceNumber)));

	return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return (x & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((y & ~(~0 << n)) << (p + 1 - n));
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
