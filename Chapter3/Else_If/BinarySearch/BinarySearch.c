#include <stdio.h>

int binsearch(int x, int v[], int n);

int numberArray[10] = {2, 34, 38, 57, 67, 87, 94, 111, 150, 210};

int main()
{
	int number;

	printf("Enter a number you want to find. : ");
	scanf("%d", &number);
	
	if (binsearch(number, numberArray, 10) == -1) {
		printf("There is no number you want to find....\n");
	} else {
		printf("The number you want to find is in %d order.\n", binsearch(number, numberArray, 10));
	}

	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0, high = n - 1;

	while (low <= high) {
		mid = (low + high) / 2;

		if (x < v[mid]) {
			high = mid - 1;
		} else if (x > v[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}

	return -1;
}
