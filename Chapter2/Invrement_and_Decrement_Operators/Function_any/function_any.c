#include <stdio.h>

char* any(const char* s1, const char* s2);

int main(void)
{
	char str1[30], str2[30];

	printf("Enter your 1st string. : ");
	scanf("%[^\n]%*c", str1);
	printf("And enter yout 2nd string. : ");
	scanf("%[^\n]%*c", str2);
	printf("Now the function like the \'strpbrk\' function is working.\n");
	printf(".......\n");
	printf(".......\n");
	printf(".......\n");
	printf("It is done. Its result is like below.\n\n\n");
	printf("\t%s\t\n", any(str1, str2));
	printf("All is done!\n");

	return 0;
}

char* any(const char* s1, const char* s2)
{
	const char* str;

	while (*s1 != '\0') {
		str = s2;
		while (*str != '\0') {
			if (*str++ == *s1) {
				return (char*)s1;
			} else {

			}
		}
		++s1;
	}

	return NULL;
}
