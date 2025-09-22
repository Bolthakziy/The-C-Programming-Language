#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int get(int fd, long pos, char *buf, int n);

int main()
{
	int result = get(0, 14, "EnKaninOgEnAnd.txt", 6);

	return 0;
}

int get(int fd, long pos, char *buf, int n)
{
	if (lseek(fd, pos, 0) >= 0) {
		return read(fd, buf, n);
	} else {
		return -1;
	}
}
