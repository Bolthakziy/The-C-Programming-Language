#include <stdio.h>

int my_lower(int c);

int main()
{
	char sentence[30];
	int i;

	printf("Enter your sentence. : ");
	scanf("%s", sentence);
	for (i = 0; sentence[i] != '\0'; ++i) {
		sentence[i] = my_lower(sentence[i]);
	}
	printf("Your sentence is converted in lower case form. Like this : %s\n", sentence);

	return 0;
}

int my_lower(int c)
{
	int lowerCharacter;

	if (c >= 'A' && c <= 'Z') {
		lowerCharacter = c + 'a' - 'A';
	} else {
		lowerCharacter = c;
	}

	return lowerCharacter;
}
