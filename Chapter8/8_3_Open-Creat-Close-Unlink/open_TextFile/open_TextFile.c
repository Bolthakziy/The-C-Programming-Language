#include <stdio.h>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;
	char buff[32];

	fd = open("EnKaninOgEnAnd.txt", O_RDWR);
	read(fd, buff, sizeof(buff));
	printf("%s\n", buff);
	close(fd);

	return 0;
}
