#include <stdio.h>

int BinarySearch_OnlyOneTest(int x, int v[], int n);

int main()
{
	int numberArray[10] = {23, 48, 55, 72, 121, 335, 567, 713, 1206, 2201};
	int number;

	printf("Enter the number you want to find! : ");
	scanf("%d", &number);

	if (BinarySearch_OnlyOneTest(number, numberArray, 10) < 0) {
		printf("I am sorry but your number is nowhere....\n");
	} else {
		printf("Your number is the %d number in order.\n", BinarySearch_OnlyOneTest(number, numberArray, 10));
	}

	return 0;
}

int BinarySearch_OnlyOneTest(int x, int v[], int n)
{
	int low = 0, high = n - 1, mid, target;
	mid = (low + high) / 2;

	while ((low <= high) && (x != v[mid])) {
		if (x < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}

		mid = (low + high) / 2;
	}

	if (x == v[mid]) {
		target = mid;
	} else {
		target = -1;
	}

	return target;
}
