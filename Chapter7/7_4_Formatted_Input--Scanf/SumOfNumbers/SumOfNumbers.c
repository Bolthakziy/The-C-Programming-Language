#include <stdio.h>

int main()
{
	int sum = 0, num;

	while (scanf("%d", &num) == 1) {
		printf("\t%d\n", sum += num);
	}

	return 0;
}
