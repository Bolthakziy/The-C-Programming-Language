#include <stdio.h>
#include <string.h>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char str[] = "Aleksander og Hanna";
	int fileStatus = open("EnKaninOgEnAnd.txt", O_RDWR);
	
	if (fileStatus > -1) {
		write(fileStatus, str, strlen(str));
		close(fileStatus);
	} else {
		printf("It fails to open the file....\n");
	}

	return 0;
}
