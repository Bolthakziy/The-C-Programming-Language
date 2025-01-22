#include <stdio.h>

int main()
{
	int number = 1;

	do {
		if (number & 0x01) {
			++number;
			continue;
		} else {
			if (number != 10) {
				printf("%d ", number);
			} else {
				printf("%d\n", number);
			}

			++number;
		}
	} while (number <= 10);

	return 0;
}
