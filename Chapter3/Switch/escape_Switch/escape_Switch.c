#include <stdio.h>
#include <string.h>

void escape(char s[], char t[]);

int main()
{
	char str1[128], str2[256];
	int index = 0;

	printf("Enter a sentence you want. : ");

	while (((str1[index] = getchar()) != EOF) && (index < 128)) {
		++index;
	}

	printf("\nSome changes happen in your sentence!\n");
	escape(str2, str1);
	printf("That is like below.\n");
	printf("%s\n", str2);

	return 0;
}

void escape(char s[], char t[])
{
	int length = strlen(t), i, tempLength;

	for (i = 0; i < length; ++i) {
		switch (t[i]) {
			case '\n' :
				strcat(s, "\\n");
				break;
			case '\t' :
				strcat(s, "\\t");
				break;
			default :
				tempLength = strlen(s);
				s[tempLength] = t[i];
				break;
		}
	}
}
