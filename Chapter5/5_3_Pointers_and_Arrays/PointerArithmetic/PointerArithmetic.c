#include <stdio.h>

int main()
{
	int *p1, *p2;
	int myArray[7] = {2, 4, 6, 8, 10, 12, 14};
	int idx;

	p1 = &myArray[0];

	for (idx = 0; idx < 7; ++idx) {
		printf("p1 element %d : %d\n", idx + 1, *(p1 + idx));
	}

	printf("\n\n\n");

	p2 = myArray;

	for (idx = 0; idx < 7; ++idx) {
		printf("p2 element %d : %d\n", idx + 1, *(p2 + idx));
	}


	return 0;
}
