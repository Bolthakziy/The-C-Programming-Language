#include <stdio.h>

int Var = 4;

void increase_Var(int x);

int main()
{
	int a;

	printf("There is a global variable \'Var\'.\n");
	printf("There is also a local variable \'Var\'.\n");
	printf("Enter a number that pass a function.\n");
	printf("It will plus your number to \'Var\'. : ");
	scanf("%d", &a);

	increase_Var(a);

	if (Var != 4) {
		printf("The value of \'Var\' is changed\n");
	} else {
		printf("The value of \'Var\' is unchanged.\n");
	}

	printf("Var : %d\n", Var);

	return 0;
}

void increase_Var(int x)
{
	int Var;

	Var += x;
}
