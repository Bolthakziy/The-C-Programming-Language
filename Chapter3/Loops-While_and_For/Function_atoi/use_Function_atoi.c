#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

int main()
{
	char numberString[20];

	printf("enter a number literal string you want. : ");
	scanf("%s", numberString);
	printf("Your string \'[%s]\' is converted into the number \'%d\'.\n", numberString, atoi(numberString));

	return 0;
}

int atoi(char s[])
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;

	if ((s[i] == '+') || (s[i] == '-')) {
		i++;
	}

	for (n = 0; isdigit(s[i]); i++) {
		n = 10 * n + (s[i] - '0');
	}

	return sign * n;
}
