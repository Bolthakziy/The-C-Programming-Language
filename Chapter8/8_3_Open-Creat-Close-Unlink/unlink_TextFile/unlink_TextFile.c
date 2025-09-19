#include <stdio.h>
#include <unistd.h>

int main()
{
	int statusFile = unlink("TreVenner.txt");

	if (statusFile < 0) {
		printf("It fails to delete the text file....\n");
	} else {
		printf("Deleting the file is done.\n");
	}

	return 0;
}
