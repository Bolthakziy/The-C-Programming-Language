#include <stdio.h>

void myStrcat(char s[], char t[]);

int main()
{
	char str1[100], str2[30];

	printf("Enter your 1st sentence. : ");
	scanf("%[^\n]%*c", str1);
	printf("And enter your 2nd sentence. : ");
	scanf("%[^\n]%*c", str2);
	printf("Now, 2nd sentence is connected to 1st sentence. Like below.\n\n");
	myStrcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}

void myStrcat(char s[], char t[])
{
	int i, j;
	i = j = 0;

	while (s[i] != '\0') {
		i++;
	}
	while ((s[i++] = t[j++]) != '\0');
}
