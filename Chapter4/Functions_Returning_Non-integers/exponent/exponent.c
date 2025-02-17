#include <stdio.h>
#include <ctype.h>

double do_atof(char s[]);

int main()
{
	char numberString[128];

	printf("Input your number string! : ");
	scanf("%s", numberString);
	printf("Your string is converted a floating-point number with an exponent like below.\n");
	printf("%lf\n", do_atof(numberString));

	return 0;
}

double do_atof(char s[])
{
	double val, power;
	int exp, i, sign;

	for (i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;

	if (s[i] == '+' || s[i] == '-') {
		i++;
	} else {

	}

	for (val = 0.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (double)(s[i] - '0');
	}

	if (s[i] == '.') {
		i++;
	} else {

	}

	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (double)(s[i] - '0');
		power *= 10.0;
	}

	val = sign * val / power;

	if (s[i] == 'e' || s[i] == 'E') {
		sign = (s[++i] == '-') ? -1 : 1;

		if (s[i] == '+' || s[i] == '-') {
			i++;
		} else {

		}

		for (exp = 0; isdigit(s[i]); i++) {
			exp = 10 * exp + (s[i] - '0');
		}

		if (sign == 1) {
			while (exp-- > 0) {
				val *= 10;
			}
		} else {
			while (exp-- > 0) {
				val /= 10;
			}
		}
	} else {

	}

	return val;
}
