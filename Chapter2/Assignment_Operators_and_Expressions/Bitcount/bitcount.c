#include <stdio.h>

int convert_BinaryNumber(int x);
int bitcount(unsigned x);

int main()
{
	int number;

	printf("Enter your number : ");
	scanf("%d", &number);
	printf("\n\n\nYour number is %d\n.", number);
	printf("And your number in binary format is %d\n.", convert_BinaryNumber(number));
	printf("In your number, the number of bits is like below.\n\n\n\n\n\n\n");
	printf("%d\n", bitcount(number));

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

	for (b = 0; x |= 0; x >>= 1) {
		if (x & 01) {
			b++;
		} else {

		}
	}

	return b;
}
