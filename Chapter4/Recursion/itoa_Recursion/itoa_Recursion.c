#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void my_itoa(int n, char s[]);

int main()
{
	char str[10];
	int x;

	printf("Enter your number! : ");
	scanf("%d", &x);
	my_itoa(x, str);
	printf("Your number is converted to a string like this. : %s\n", str);

	return 0;
}

void my_itoa(int n, char s[])
{
	static int i;

	if (n / 10) {
		my_itoa(n / 10, s);
	} else {
		i = 0;

		if (n < 0) {
			s[i++] = '-';
		} else {
		
		}
	}

	s[i++] = abs(n) % 10 + '0';
	s[i] = '\0';
}
