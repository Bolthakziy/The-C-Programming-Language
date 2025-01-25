#include <stdio.h>
#include <stdbool.h>

int main()
{
	int number, sum = 0, times = 0;
	double average;

	printf("Enter numbers to get average of these number.\n");
	printf("If you want to quit to enter numbers, then enter the number \'0\'.\n\n");

	while (true) {
		scanf("%d", &number);
		sum += number;

		if (number == 0) {
			goto AVG;
		} else {

		}

		++times;
	}

AVG :
	average = (double)sum / (double)times;
	printf("The average of your numbers is %f\n", average);

	return 0;
}
