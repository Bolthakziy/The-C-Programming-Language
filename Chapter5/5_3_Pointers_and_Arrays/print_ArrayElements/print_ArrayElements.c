#include <stdio.h>

void print_ArrayElements(int arr[]);

int main()
{
	int myArray[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

	print_ArrayElements(myArray);

	return 0;
}

void print_ArrayElements(int arr[])
{
	int idx;

	for (idx = 0; idx < 10; ++idx) {
		printf("%d ", *(arr + idx));
	}

	printf("\n\n");
}
