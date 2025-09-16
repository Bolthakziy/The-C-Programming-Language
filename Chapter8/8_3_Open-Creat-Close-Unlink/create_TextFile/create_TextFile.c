#include <stdio.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int flag;
	char str[] = "En Kanin og En And";

	flag = creat("EnKaninOgEnAnd", S_IREAD | S_IWRITE);
	write(flag, str, strlen(str));
	close(flag);

	return 0;
}
