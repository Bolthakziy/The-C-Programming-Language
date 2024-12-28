#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x, y;
	bool b;

	printf("Input 2 numbers you want. : ");
	scanf("%d %d", &x, &y);
	printf("Let\'s check that your numbers can make a enough big number.");
	printf(".......\n");
	printf(".......\n");
	printf(".......\n");
	b = x * y >= 100 ? true : false;

	if (b) {
		printf("Your numbers are enough.\n");
	} else {
		printf("your numbers are not enough.\n");
	}

	return 0;
}
