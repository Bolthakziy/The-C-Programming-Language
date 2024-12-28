#include <stdio.h>

int main()
{
	int x;

	printf("Input a number you want. : ");
	scanf("%d", &x);

	if (x > 7) {
		printf("Your number is bigger than \'7\'.\n");
	} else {
		printf("Your number is not bigger than \'7\'.\n");
	}

	return 0;
}
