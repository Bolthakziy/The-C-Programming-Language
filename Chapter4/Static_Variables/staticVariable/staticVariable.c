#include <stdio.h>

void do_MultiplyStaticVariable(void);
void do_Multiply(void);

int main()
{
	int i;

	printf("Let\'s see the resuslt after multiplying 2 to a static variable and a local variable.\n");
	printf("To each variable, we will multiply 2 three times!\n\n\n");

	for (i = 0; i < 3; ++i) {
		do_Multiply();
		do_MultiplyStaticVariable();
	}

	return 0;
}

void do_MultiplyStaticVariable(void)
{
	static int number = 1;
	number *= 2;

	printf("The value of static variable : %d\n", number);
}

void do_Multiply(void)
{
	int Number = 1;
	Number *= 2;

	printf("The value of local variable : %d\n", Number);
}
