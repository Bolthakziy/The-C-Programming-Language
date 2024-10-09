#include <stdio.h>

int my_atoi(char s[]);

int main()
{
	char str[20];
	int convertedNumber;

	printf("Please, enter your serial numeric characters. : ");
	scanf("%s", str);
	convertedNumber = my_atoi(str);
	printf("Your number is %d\n", convertedNumber);

	return 0;
}

int my_atoi(char s[])
{
	int i, n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}

	return n;
}
