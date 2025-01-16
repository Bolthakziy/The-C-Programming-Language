#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[]);

int main()
{
	int number;
	char str[32];

	printf("Enter your number. : ");
	scanf("%d", &number);
	printf("Your number is converted to a string like below.\n");
	itoa(number, str);

	return 0;
}

void reverse(char s[])
{
	int length, i = 0;
	char temp;

	length = strlen(s);

	for (i = 0; i < length / 2; ++i) {
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	printf("%s\n", s);
}

void itoa(int n, char s[])
{
	int i = 0, sign;

	if ((sign = n) < 0) {
		n = -n;
	} else {

	}

	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0) {
		s[i++] = '-';
	} else {

	}

	s[i] = '\0';
	reverse(s);
}
