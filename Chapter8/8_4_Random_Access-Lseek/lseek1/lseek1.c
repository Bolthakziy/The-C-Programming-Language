#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open("EnKaninOgEnAnd.txt", O_RDONLY);
	long position;
	char str[] = "Hanna";

	if (fd == -1) {
		perror("It fails to open the file....\n");
		
		return 1;
	} else {

	}

	position = lseek(fd, 32, SEEK_SET);

	if (position == -1) {
		perror("\'lseek\' fails to do that....\n");
		close(fd);

		return 1;
	} else {

	}

	if (write(fd, str, 6) == 6) {
		perror("It fails to write on the file....\n");
		close(fd);

		return 1;
	} else {

	}

	printf("File succeeds to be modified!\n");
	close(fd);

	return 0;
}
