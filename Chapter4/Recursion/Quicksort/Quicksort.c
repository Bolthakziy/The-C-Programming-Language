#include <stdio.h>

void swap(int v[], int i, int j);
void do_Quicksort(int v[], int left, int right);

int main()
{
	int numberArray[10] = {56, 2, 489, 36, 144, 91, 582, 1004, 7, 73};
	int idx;

	printf("These are originally numbers.\n");

	for (idx = 0; idx < 10; ++idx) {
		if (idx != 9) {
			printf("%d ", numberArray[idx]);
		} else {
			printf("%d\n", numberArray[idx]);
		}
	}

	printf("And next! They are arranged like below!\n");
	do_Quicksort(numberArray, 0, 9);
	
	for (idx = 0; idx < 10; ++idx) {
		if (idx != 9) {
			printf("%d ", numberArray[idx]);
		} else {
			printf("%d\n", numberArray[idx]);
		}
	}

	return 0;
}

void swap(int v[], int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void do_Quicksort(int v[], int left, int right)
{
	int i, last;

	if (left >= right) {
		return;
	} else {
	
	}

	swap(v, left, (left + right) / 2);
	last = left;

	for (i = left + 1; i <= right; i++) {
		if (v[i] < v[left]) {
			swap(v, ++last, i);
		} else {
		
		}
	}

	swap(v, left, last);
	do_Quicksort(v, left, last - 1);
	do_Quicksort(v, last + 1, right);
}
