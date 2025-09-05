#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch, ch2;

	printf("Enter a character. : ");
	scanf("%c", &ch);

	if (isupper(ch) != 0) {
		printf("Your character is upper case.\n");
		printf("Your character is converted into a lower case \'%c\'.\n", tolower(ch));
	} else if (islower(ch) != 0) {
		printf("Your character is lower case.\n");
		printf("Your character is converted into an upper case \'%c\'.\n", toupper(ch));
	} else if (isalpha(ch) == 0) {
		printf("I am sorry that you did not input correctly....\n");
	} else {

	}

	printf("Is \'$\' an alphabet?\n");

	if (isalnum('%') == 0) {
		printf("No, it is not an alphabet.\n");
	} else {
		printf("Yes, it is an alphabet.\n");
	}

	printf("Is \'3\' a number?\n");

	if (isdigit('3') != 0) {
		printf("Yes, it is a number.\n");
	} else {
		printf("No, it is not a number.\n");
	}
	
	printf("Is \'\\t\' a space?\n");

	if (isspace('\t') != 0) {
		printf("Yes, it is a space.\n");
	} else {
		printf("No, it is not a space.\n");
	}

	return 0;
}
