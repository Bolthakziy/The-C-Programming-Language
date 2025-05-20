#include <stdio.h>

int pointer_for_strlen(char* str);

int main()
{
	char str[14] = {'Z', 'a', 'j', 'a', 'c', ' ', 'i', ' ', 'k', 'a', 'c', 'z', 'k', 'a'};

	printf("The length of the sentence \"%s\" is %d\n", str, pointer_for_strlen(str));

	return 0;
}

int pointer_for_strlen(char* str)
{
	char *p = str;

	while (*p != '\0') {
		p++;
	}

	return (p - str);
}
