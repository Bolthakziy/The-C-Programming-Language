#include <stdio.h>
#include <stdlib.h>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

void error(char *fmt, ...);
void filecopy(int ifd, int ofd);

int main(int argc, char *argv[])
{
	int fd;

	if (argc == 1) {
		filecopy(0, 1);
	} else {
		while (--argc > 0) {
			if ((fd = open(*++argv, O_RDONLY)) == -1) {
				error("It fails to open \'%s\'....", *argv);
			} else {
				filecopy(fd, 1);
				close(fd);
			}
		}
	}

	return 0;
}

void error(char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	fprintf(stderr, "Error : ");
	//vprintf(stderr, fmt, args);
	fprintf(stderr, "\n");
	va_end(args);
	exit(1);
}

void filecopy(int ifd, int ofd)
{
	int n;
	char buf[BUFSIZ];

	while ((n = read(ofd, buf, n)) > 0) {
		if (write(ofd, buf, n) !=n) {
			error("Wriing error....");
		} else {

		}
	}
}
