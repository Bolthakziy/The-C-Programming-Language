#include <stdio.h>
#include <math.h>

int main()
{
	int x = 3, y = 3;

	printf("First case!\n");
	printf("%d %d\n", ++x, (int)pow(2, x));
	printf("Second case!\n");
	++y;
	printf("%d %d\n", y, (int)pow(2, y));

	return 0;
}
