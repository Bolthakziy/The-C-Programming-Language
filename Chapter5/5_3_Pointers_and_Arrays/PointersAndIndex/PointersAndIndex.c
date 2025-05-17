#include <stdio.h>

int main()
{
	char cArray[14] = {'Z', 'a', 'j', 'a', 'c', ' ', 'i', ' ', 'k', 'a', 'c', 'z', 'k', 'a'};
	int idx;

	for (idx = 0; idx < 14; ++idx) {
		printf("%c", *(cArray + idx));
	}

	printf("\n");

	return 0;
}
