#include <stdio.h>

int main()
{
	register int sum = 0;
	int i;

	for (i = 0; i < 10; ++i) {
		sum += i;
	}

	printf("The value of sum : %d\n", sum);

	return 0;
}
