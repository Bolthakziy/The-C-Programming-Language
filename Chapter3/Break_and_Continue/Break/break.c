#include <stdio.h>
#include <stdbool.h>

int main()
{
	int limit, i = 0;

	printf("How many stars do you want to print? : ");
	scanf("%d", &limit);
	printf("Look at %d star(s)\n\n", limit);

	while (true) {
		if (i == limit) {
			break;
		} else {
			printf("*");
		}

		++i;
	}
	printf("\n");

	return 0;
}
