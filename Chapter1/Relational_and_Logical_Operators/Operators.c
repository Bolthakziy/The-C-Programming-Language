#include <stdio.h>

int main()
{
	int input;
	printf("Enter a number. : ");
	scanf("%d", &input);

	if (!input) {
		printf("Your input is zero!\n");
	} else {
		if (input % 2 == 0 && input % 3 == 0) {
			printf("Your input is a multiple of 6.\n");
		} else if (input % 2 != 0 && input % 3 == 0) {
			printf("Your input is a multiple of 3.\n");
		} else if (input % 2 == 0 && input % 3 != 0) {
			printf("Your input is an even number.\n");
		} else {
			printf("I do not know your input exactly.\n");
		}
	}

	return 0;
}
