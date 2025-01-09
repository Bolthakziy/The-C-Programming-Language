#include <stdio.h>

int main()
{
	int number, multiply = 1;

	printf("Input your number. Then you will see a number. : ");
	scanf("%d", &number);
	printf("Do you wonder that how much the multiple value from your number to 1?\n");
	printf("But all right. Because i, the wonderful compuer, will calculate it and let you know.\n");
	printf("..........\n..........\n..........\n");

	while (number != 0) {
		multiply *= number;
		--number;
	}

	printf("The answer is %d!\n", multiply);

	return 0;
}
