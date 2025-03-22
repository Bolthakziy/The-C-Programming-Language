#include <stdio.h>

int sum;

void do_Sum1(int x);
void do_Sum2(int x);

int main()
{
	int number;

	printf("Enter your number.\n");
	printf("Then you can show the sum from your number to \'1\'.\n\n");
	scanf("%d", &number);

	do_Sum1(number);
	printf("The value of \'sum\' : %d\n", sum);
	printf("Oh, my mistake. Wait a moment please.....\n");

	do_Sum2(number);
	printf("The value of \'sum\' : %d\n", sum);

	return 0;
}

void do_Sum1(int x)
{
	int sum = 0;

	while (x > 0) {
		sum += x;
		--x;
	}

	printf("First operation is done.\n");
}

void do_Sum2(int x)
{
	while (x > 0) {
		sum += x;
		--x;
	}

	printf("Second operation is done.\n");
}
