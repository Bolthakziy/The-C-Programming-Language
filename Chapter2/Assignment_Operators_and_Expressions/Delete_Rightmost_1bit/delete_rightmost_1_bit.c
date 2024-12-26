#include <stdio.h>

int convert_BinaryNumber(int x);
int bitcount(unsigned x);

int main()
{
	int number;

	for (number = 10; number <= 16; ++number) {
		printf("The number : %d\n", number);
		printf("The number in binary mode : %d\tThe number of bits : %d\n", convert_BinaryNumber(number), bitcount(number));
		printf("(The number - 1) in binary mode : %d\tThe number of bits : %d\n", convert_BinaryNumber(number - 1), bitcount(number - 1));
		printf("The number &= (The number - 1) in binary number mode : %d\tThe number of bits : %d\n\n", convert_BinaryNumber(number & (number - 1)), bitcount(number & (number - 1)));
	}

	return 0;
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

int bitcount(unsigned x)
{
	int b;

	for (b = 0; x != 0; x >>= 1) {
		if (x & 01) {
			b++;
		} else {

		}
	}

	return b;
}
