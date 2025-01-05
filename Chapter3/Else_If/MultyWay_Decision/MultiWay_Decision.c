#include <stdio.h>

int main()
{
	unsigned int grade;

	printf("Input your grade. : ");
	scanf("%u", &grade);

	if (grade < 60) {
		printf("Your grade is \'F\'....\n");
	} else if ((grade >= 60) && (grade < 70)) {
		printf("Your grade is \'D\'.\n");
	} else if ((grade >= 70) && (grade < 80)) {
		printf("Your grade is \'C\'.\n");
	} else if ((grade >= 80) && (grade < 90)) {
		printf("Your grade is \'B\'.\n");
	} else if ((grade >= 90) && (grade <= 100)) {
		printf("Your grade is \'A\'.\n");
	} else {
		printf("Please input your appropriate grade!\n");
	}

	return 0;
}
