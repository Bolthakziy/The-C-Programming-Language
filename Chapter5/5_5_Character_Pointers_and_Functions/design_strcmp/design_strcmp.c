#include <stdio.h>

int myStrcmp(char* str1, char* str2);

int main()
{
	char words1[32], words2[32];

	printf("Enter your 1st string! : ");
	scanf("%[^\n]%*c", words1);
	printf("And enter your 2nd string! : ");
	scanf("%[^\n]%*c", words2);

	if (!myStrcmp(words1, words2)) {
		printf("Your 1st string and 2nd string are same.\n");
	} else {
		printf("Your 1st string and 2nd string are different.\n");
	}

	return 0;
}

int myStrcmp(char* str1, char* str2)
{
	for (; *str1 == *str2; str1++, str2++) {
		if (*str1 == '\0') {
			return 0;
		} else {
		
		}
	}

	return (*str1 - *str2);
}
