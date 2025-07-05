#include <stdio.h>

struct PEOPLE
{
	char name[16];
	int age;
	long socialNumber;
};

int main()
{
	struct PEOPLE person[2];
	int i;

	for (i = 0; i < 2; ++i) {
		printf("Enter your name. : ");
		scanf("%s", person[i].name);
		printf("Enter your age. : ");
		scanf("%d", &(person[i].age));
		printf("Enter your social number : ");
		scanf("%ld", &(person[i].socialNumber));
	}

	for (i = 0; i < 2; ++i) {
		printf("Name : %s\n", person[i].name);
		printf("Age : %d\n", person[i].age);
		printf("Social number : %ld\n\n\n", person[i].socialNumber);
	}

	return 0;
}
