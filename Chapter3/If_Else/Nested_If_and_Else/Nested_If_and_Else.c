#include <stdio.h>

int main()
{
	char ch;

	printf("Enter your alphabet. : ");
	scanf("%c", &ch);

	if (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) {
		if ((ch >= 65) && (ch <= 90)) {
			printf("You enter an uppercase alphabet.\n");
		} else {
			printf("You enter a lowercase alphabet.\n");
		}
	} else {
		printf("Please enter a correct alphabet!\n");
	}

	return 0;
}
