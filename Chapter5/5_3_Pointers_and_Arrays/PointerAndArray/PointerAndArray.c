#include <stdio.h>

int main()
{
	double dArray[5] = {3.14, 6.28, 12.56, 9.42, 15.7};
	double* dPointer;
	int idx;

	dPointer = dArray;

	for (idx = 0; idx < 5; ++idx) {
		printf("%d element : %lf\n", idx + 1, *(dPointer + idx));
	}

	return 0;
}
