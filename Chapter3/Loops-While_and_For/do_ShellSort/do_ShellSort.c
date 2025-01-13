#include <stdio.h>

void do_Shellsort(int v[], int n);

int main()
{
	int numberArray[10] = {25, 96, 2, 45, 476, 55, 1004, 32, 98, 778}, i;

	printf("Before doing Shellsorting! : ");
	for (i = 0; i < 10; ++i) {
		if (i != 9) {
			printf("%d ", numberArray[i]);
		} else {
			printf("%d\n", numberArray[i]);
		}
	}

	do_Shellsort(numberArray, 10);
	printf("After doing Shellsorting! : ");
	for (i = 0; i < 10; ++i) {
		if (i != 9) {
			printf("%d ", numberArray[i]);
		} else {
			printf("%d\n", numberArray[i]);
		}
	}

	return 0;
}

void do_Shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}
