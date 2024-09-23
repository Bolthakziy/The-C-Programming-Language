#include <stdio.h>

int main()
{
	int c, lines = 0;

	while((c = getchar()) != EOF) {
		if(c == '\n') {
			++lines;
		} else {

		}
	}
	printf("The number of lines : %d\n", lines);

	return 0;
}
