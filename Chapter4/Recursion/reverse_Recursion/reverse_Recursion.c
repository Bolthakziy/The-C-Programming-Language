#include <stdio.h>
#include <string.h>

void do_Reverse(char s[]);

int main()
{
	char str[48];

	printf("Enter your sentence. Then we will show a reversed sentence to you!\n");
	scanf("%s", str);
	do_Reverse(str);
	printf("Your sentence is recersed like below.\n");
	printf("%s\n", str);

	return 0;
}

void do_Reverse(char s[])
{
	void do_MidReverse(char _s[], int i, int len);

	do_MidReverse(s, 0, strlen(s));
}

void do_MidReverse(char _s[], int i, int len)
{
	int c, j;

	j = len - (i + 1);

	if (i < j) {
		c = _s[i];
		_s[i] = _s[j];
		_s[j] = c;
		do_MidReverse(_s, ++i, len);
	}
}
