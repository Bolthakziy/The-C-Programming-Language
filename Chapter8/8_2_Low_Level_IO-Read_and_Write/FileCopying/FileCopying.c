#include <sys/syscalls.h>

int main()
{
	char buffer[BUFSIZ];
	int n;

	while ((n = read(0, buffer, BUFSIZ)) > 0) {
		write(1, buf, n);
	}

	return 0;
}
