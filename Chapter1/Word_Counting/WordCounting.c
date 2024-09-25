#include <stdio.h>


#define  IN   1
#define  OUT  0


int main()
{
	int a, newLine = 0, newWord = 0, newCharacter = 0, state = OUT;

	while ((a = getchar()) != EOF) {
		++newCharacter;

		if (a == '\n') {
			++newLine;
		}

		if ((a == ' ') || (a == '\n') || (a == '\t')) {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++newWord;
		} else {

		}
	}
	printf("Line : %d, Word : %d, Character : %d\n", newLine, newWord, newCharacter);

	return 0;
}
