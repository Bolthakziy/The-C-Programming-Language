#include <stdio.h>

int main()
{
	int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i = 0;

	printf("What happens after \'arr[i] = i++\'?\n");
	arr[i] = i++;
	printf("arr[i] : %d\ti : %d\n", arr[i], i);

	return 0;
}
