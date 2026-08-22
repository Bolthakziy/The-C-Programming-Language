#include <stdio.h>

int main()
{
	char str[TMP_MAX];

	if (tmpnam(str) != NULL) {
		printf("The temporary file name is created.\n");
	} else {
		printf("It fails to create the temporary file name....\n");
	}
}
