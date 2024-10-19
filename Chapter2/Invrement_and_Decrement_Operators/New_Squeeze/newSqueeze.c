#include <stdio.h>

void newSqueeze(char s1[], char s2[], char ch);

int main()
{
	char str1[30], str2[30];
	char a;

	printf("Enter your 1st string. : ");
	scanf("%[^\n]%*c", str1);
	printf("Enter your 2nd string. : ");
	scanf("%[^\n]%*c", str2);
	printf("Enter a character that you want to remove. : ");
	scanf("%c", &a);
	printf("Now in your 2 strings, the character you want to remove is deleted. Like below.\n\n\n");
	newSqueeze(str1, str2, a);
	printf("1st string : %s\n", str1);
	printf("2nd string : %s\n", str2);

	return 0;
}

void newSqueeze(char s1[], char s2[], char ch)
{
	int i, j;

	for (i = j = 0; s1[i] != '\0'; ++i) {
		if (s1[i] != ch) {
			s1[j++] = s1[i];
		} else {

		}
	}
	s1[j] = '\0';

	for (i = j = 0; s2[i] != '\0'; ++i) {
		if (s2[i] != ch) {
			s2[j++] = s2[i];
		} else {

		}
	}
	s2[j] = '\0';
}
