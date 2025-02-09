#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main()
{
	char numberString[100];

	printf("Enter your real number string. : ");
	scanf("%s", numberString);
	printf("Your real number string is converted like this. : %lf\n", atof(numberString));

	return 0;
}

double atof(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); ++i);
	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-') {
		++i;
	} else {

	}

	for (val = 0.0; isdigit(s[i]); ++i) {
		val = 10.0 * val + (s[i] - '0');
	}

	if (s[i] == '.') {
		++i;
	} else {

	}

	for (power = 1.0; isdigit(s[i]); ++i) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	return sign * val / power;
}
