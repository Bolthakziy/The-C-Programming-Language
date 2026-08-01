#include <stdio.h>

int main()
{
	char filename[] = "texto.txt";
	int r;

	r = remove(filename);

	if (r == 0) {
		printf("The file \'texto.txt\' is removed.\n");
	} else {

	}

	return 0;
}
