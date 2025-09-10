#include <stdio.h>
#include <stdlib.h>

#define  frand()  ((double)rand() / (RAND_MAX + 1.0))

int main()
{
	double d, opponent;

	printf("Enter your positive number under \'1\'! : ");
	scanf("%lf", &d);

	if ((d >= 1) && (d <= 0.0)) {
		printf("Your number is not appropriate....\n");
	} else {
		opponent = frand();

		if (d <= opponent) {
			printf("Your number is not enough big.... You lose....\n");
		} else {
			printf("Your number is so big. You win!\n");
		}
	}

	return 0;
}
