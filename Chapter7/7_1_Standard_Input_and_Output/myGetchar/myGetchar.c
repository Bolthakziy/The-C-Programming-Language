#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != 'x') {
		switch (ch) {
			case 'k' :
			case 'K' :
				printf("Jeg er en kanin.\n");
				break;
			case 'a' :
			case 'A' :
				printf("Jeg er en And.\n");
				break;
			case 'x' :
				break;
			default :
				break;
		}
	}

	return 0;
}
