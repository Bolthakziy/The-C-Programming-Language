#include <stdio.h>

int main()
{
	int x;

	printf("Input a number between 1 and 5! : ");
	scanf("%d", &x);

	if ((x < 1) && (x > 5)) {
		printf("You give a wrong number....\n");
	} else {
		printf("%d! It is good for you to be a fortunate number!!!\n", x);
	}

	return 0;
}
