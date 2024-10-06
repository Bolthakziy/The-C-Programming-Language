#include <stdio.h>

int main()
{
	// Qualifier 'const' makes a variable a 'read-only' type variable.
	const double e = 2.71828182845905;
	const char message[] = "C Programming is fun";

	printf("the value of \'e\' : %lf\n", e);
	printf("%s\n", message);

	return 0;
}
