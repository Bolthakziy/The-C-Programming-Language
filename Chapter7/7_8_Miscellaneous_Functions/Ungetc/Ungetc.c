#include <stdio.h>
#include <stdbool.h>

int main()
{
	char ch;
	FILE *fp = fopen("practice.txt", "r");

	while (true) {
		ch = fgetc(fp);

		if (ch == EOF) {
			perror("Reading the text file ");
			break;
		} else {
			printf("%c", ch);
		}
	}

	return 0;
}
