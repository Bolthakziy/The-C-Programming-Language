#include <stdio.h>
#include <string.h>

char str[30];

void do_Reverse(char s[]);

int main()
{
	printf("Enter a sentence you want. : ");
	scanf("%[^\n]%*c", str);
	do_Reverse(str);
	printf("Reversing your sentence is done.\n");
	printf("The sentence that is reversed is like this. : %s\n", str);

	return 0;
}

void do_Reverse(char s[])
{
	int i, j;
	char ch;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}
