#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]);
void itoa_Ver3(int n, char s[], int w);

int main()
{
	int number;
	char str[32];

	printf("Enter your number. : ");
	scanf("%d", &number);
	printf("Your number is converted into a string like below.\n");
	itoa_Ver3(number, str, 12);

	return 0;
}

void reverse(char s[])
{
	int length = strlen(s), i;
	char temp;

	for (i = 0; i < length / 2; ++i) {
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	printf("%s\n", s);
}

void itoa_Ver3(int n, char s[], int w)
{
	int i = 0, sign = n;

	do {
		s[i++] = abs(n % 10) + '0';
	} while ((n /= 10) != 0);

	if (sign < 0) {
		s[i++] = '-';
	} else {

	}

	while (i < w) {
		s[i++] = ' ';
	}

	s[i] = '\0';
	reverse(s);
}
