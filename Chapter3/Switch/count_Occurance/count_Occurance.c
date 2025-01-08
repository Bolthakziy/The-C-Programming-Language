#include <stdio.h>

int main()
{
	char ch;
	int i, alphabetOccurance[4];

	for (i = 0; i < 4; ++i) {
		alphabetOccurance[i] = 0;
	}

	while ((ch = getchar()) != EOF) {
		switch (ch) {
			case 'A' :
			case 'B' :
			case 'C' :
			case 'D' :
				alphabetOccurance[ch - 'A']++;
				break;
			case ' ' :
			case '\n' :
			case '\t' :
				break;
			default :
				printf("Please, enter a character from \'A\' to \'D\'\n");
				break;
		}
	}

	for (i = 0; i < 4; ++i) {
		printf("%c : %d\n", (char)(i + 65), alphabetOccurance[i]);
	}

	return 0;
}
