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
	static char buf[BUFSIZ];
	static char *bufp = buf;
	static int n = 0;

	if (n == 0) {
		n = read(0, buf, sizeof(buf));
		bufp = buf;
	} else {

	}

	return (--n >= 0) ? (unsigned char)*bufp++ : EOF;
}
