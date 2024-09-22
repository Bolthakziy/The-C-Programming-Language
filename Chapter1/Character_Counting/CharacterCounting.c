#include <stdio.h>

int main()
{
	double countedNumber;

	for(countedNumber = 0; getchar() != EOF; ++countedNumber);
	printf("%.0lf\n", countedNumber);

	return 0;
}
