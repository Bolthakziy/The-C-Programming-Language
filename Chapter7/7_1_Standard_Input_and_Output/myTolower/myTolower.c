#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '^') {
		putchar(tolower(ch));
	}

	return 0;
}
