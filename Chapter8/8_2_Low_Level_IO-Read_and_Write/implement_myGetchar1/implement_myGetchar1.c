#include "syscalls.h"

int myGetchar(void);

int main()
{
	char letter = myGetchar();

	printf("The character that i entered. : %c\n", letter);

	return 0;
}

int myGetchar(void)
{
	char ch;

	return (read(0, &ch, 1) == 1) ? (unsigned char)ch : EOF;
}
