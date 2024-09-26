#include <stdio.h>

int main()
{
	int character, index, space = 0, others = 0;
	int digit[10];

	for (index = 0; index < 10; ++index) {
		digit[index] = 0;
	}

	while (character = getchar() != EOF) {
		if (character >= '0' && character <= '9') {
			++digit[character - '0'];
		} else if ((character == ' ') || (character == '\n') || (character == '\t')) {
			++space;
		} else {
			++others;
		}
	}

	printf("Digits =");
	for (index = 0; index < 10; ++index) {
		printf(" %d", digit[index]);
	}
	printf(", Space = %d, Others = %d\n", space, others);

	return 0;
}
