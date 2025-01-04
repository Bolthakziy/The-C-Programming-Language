#include <stdio.h>

int main()
{
	unsigned int number;
	int i;

	printf("Enter your appropriate number! : ");
	scanf("%u", &number);

	if (number <= 20) {
		for (i = 0; i < number; i++) {
			if (i % 4 != 0) {
				printf("*");
			} else {
				printf("^");
			}
		}
		printf("\n");
	} else {
		printf("You enter a too big number....\n");
	}

	return 0;
}
