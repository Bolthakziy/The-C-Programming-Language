#include <stdio.h>

int main()
{
	int x = 3, y = 5;
	int *p;

	printf("x : %d\n", x);
	printf("y : %d\n\n", y);


	p = &x;
	y = *p;
	*p = 27;
	p = &y;

	printf("\nSomething has changed.\n\n");
	printf("x : %d\n", x);
	printf("y : %d\n", y);

	return 0;
}
