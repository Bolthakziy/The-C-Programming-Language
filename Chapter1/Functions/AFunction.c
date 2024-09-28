#include <stdio.h>

int sum(int x, int y);

int main()
{
	int x, y, i, j;

	for (i = 1; i < 10; ++i) {
		for (j = 1; j < 10; ++j) {
			printf("%d + %d = %d\n", i, j, sum(i, j));
		}
		printf("\n\n\n");
	}

	return 0;
}

int sum(int x, int y)
{
	int _sum = x + y;

	return _sum;
}
