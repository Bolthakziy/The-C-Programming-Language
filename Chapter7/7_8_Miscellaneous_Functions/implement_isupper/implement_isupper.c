#include <stdio.h>

#define  isupper(ch)  (((ch) >= 'A') && ((ch) <= 'Z')) ? 1 : 0

int main()
{
	int i;
	char ch;

	for (i = 0; i < 3; ++i) {
		printf("Enter your character. : ");
		scanf("%c", &ch);

		if (isupper(ch)) {
			printf("Your character is an upper case letter!\n");
		} else {
			printf("Your character is not an upper case letter....\n");
		}

		ch = getchar();
	}

	return 0;
}
