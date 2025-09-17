#include <stdio.h>
#include <sys/file.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>

#define  PERMS  0666

void error(char *fmt, ...);

int main(int argc, char *argv[])
{
	int f1, f2, n;
	char buf[BUFSIZ];

	if (argc != 3) {
		error("Usage : CP");
	} else {

	}

	if ((f1 = open(argv[1], O_RDONLY, 0)) == -1) {
		error("It fails to op \'%s\'....", argv[1]);
	} else {

	}

	if ((f2 = creat(argv[2], PERMS)) == -1) {
		error("It fails to create \'%s\' whose mode is %03o....", argv[2], PERMS);
	} else {

	}

	while ((n = read(f1, buf, BUFSIZ)) > 0) {
		if (write(f2, buf, n) != n) {
			error("Writing error on file \'%s\'....", argv[2]);
		} else {

		}
	}

	return 0;
}

void error(char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	fprintf(stderr, "Error : ");
	vfprintf(stderr, fmt, args);
	fprintf(stderr, "\n");
	va_end(args);
	exit(1);
}
