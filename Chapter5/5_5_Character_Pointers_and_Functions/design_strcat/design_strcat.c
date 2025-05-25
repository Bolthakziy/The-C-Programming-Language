#include <stdio.h>

void myStrcat(char* str1, char* str2);

int main()
{
	char words1[32], words2[32];

	printf("Enter your 1st string! : ");
	scanf("%[^\n]%*c", words1);
	printf("And enter your 2nd string! : ");
	scanf("%[^\n]%*c", words2);
	myStrcat(words1, words2);
	printf("Final string! : %s\n", words1);

	return 0;
}

void myStrcat(char* str1, char* str2)
{
	while (*str1) {
		str1++;
	}

	while (*str1++ = *str2++);
}
