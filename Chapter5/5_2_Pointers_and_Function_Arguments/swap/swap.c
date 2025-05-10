#include <stdio.h>

void swap1(int x, int y);
void swap2(int *px, int *py);

int main()
{
	int a, b;

	printf("There will be 2 change tryings.\n");
	printf("Please enter your 2 numbers. : ");
	scanf("%d %d", &a, &b);
	printf("\n\n1st change trying...\n");
	swap1(a, b);
	printf("1st number : %d\t2nd number : %d\n", a, b);
	printf("\n2nd change trying...\n");
	swap2(&a, &b);
	printf("1st number : %d\t2nd number : %d\n", a, b);

	return 0;
}

void swap1(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void swap2(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
