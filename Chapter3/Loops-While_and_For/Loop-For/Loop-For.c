#include <stdio.h>

int main()
{
	char ch;

	for ( ; ch != 'K'; ) {
		printf("Enter an adequate alphabet if you want to escape! : ");
		scanf("%c", &ch);
		getchar();
	}

	printf("The alphabet \'%c\' makes you get out of the \'FOR\' loop.\n", ch);

	return 0;
}
