#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itob(int n, char s[], int b);

int main()
{
	int number, base;
	char str[32];

	printf("Enter your decimal number and a base you want. : ");
	scanf("%d %d", &number, &base);
	printf("Your number is converted into %d-base number like below.\n", base);
	itob(number, str, base);

	return 0;
}

void reverse(char s[])
{
	int length = strlen(s), i = 0;
	char temp;

	for (i = 0; i < length / 2; ++i) {
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	printf("%s\n", s);
}

void itob(int n, char s[], int b)
{
	int i = 0, j, sign;

	if ((sign = n) < 0) {
		n = -n;
	} else {

	}

	do {
		j = n % b;
		s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;
	} while ((n /= b) > 0);

	if (sign < 0) {
		s[i++] = '-';
	} else {

	}

	s[i] = '\0';
	reverse(s);
}
