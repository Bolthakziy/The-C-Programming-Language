#include <stdio.h>

char* str1 = "Jeg hedder Alexander";
char* str2 = "Daniel er en kanin.";
char* str3 = "Laura er sød.";

int my_strlen(char s[]);

int main()
{
	printf("The length of \"String 1\" is %d\n", my_strlen(str1));
	printf("The length of \"String 2\" is %d\n", my_strlen(str2));
	printf("The length of \"String 3\" is %d\n", my_strlen(str3));

	return 0;
}

int my_strlen(char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}

	return i;
}
