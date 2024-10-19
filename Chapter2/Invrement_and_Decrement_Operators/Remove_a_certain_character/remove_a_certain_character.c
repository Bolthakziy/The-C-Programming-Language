#include <stdio.h>

void mySqueeze(char s[], char ch);

int main()
{
	char str[30];
	char a;

	printf("Enter your string. : ");
	scanf("%[^\n]%*c", str);
	printf("Enter a character which you want to remove. : ");
	scanf("%c", &a);
	mySqueeze(str, a);
	printf("This is the sentence in which the character you want to remove is deleted. : %s\n", str);

	return 0;
}

void mySqueeze(char s[], char ch)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; ++i) {
		if (s[i] != ch) {
			s[j++] = s[i];
		} else {

		}
	}
	s[j] = '\0';
}
