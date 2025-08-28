#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fp = fopen("EnKaninOgEnAnd.txt", "r");

	if (fp == NULL) {
		printf("Error....\n");

		exit(0);
	} else {

	}

	while (true) {
		if (feof(fp) != 0) {
			printf("The end of the text file.....\n");

			break;
		} else {

		}

		ch = fgetc(fp);
		printf("%c", ch);
	}

	return 0;
}
