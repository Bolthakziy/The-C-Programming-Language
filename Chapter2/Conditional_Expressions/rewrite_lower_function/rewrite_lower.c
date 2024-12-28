#include <stdio.h>

char lower(char c);

int main()
{
	char c;

	printf("Input your character. : ");
	scanf("%c", &c);

	if ((c >= 97) && (c <= 122)) {
		printf("Your character does not need to be converted.\n");
	} else if ((c >= 65) && (c <= 90)) {
		printf("Your character \'%c\' is converted to \'%c\'.\n", c, lower(c));
	} else {

	}

	return 0;
}

char lower(char c)
{
	char ch;
	ch = ((c >= 97) && (c <= 122)) ? c : c + 32;

	return ch;
}
