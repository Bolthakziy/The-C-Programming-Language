#include <stdio.h>

void expand(char s1[], char s2[]);

int main()
{
	char str1[32], str2[32];

	printf("Enter a shorthand sentence. : ");
	scanf("%[^\n]%*c", str1);
	expand(str1, str2);
	printf("The expanded sentence : %s\n", str2);

	return 0;
}

void expand(char s1[], char s2[])
{
	char ch;
	int i = 0, j = 0;

	while ((ch = s1[i++]) != '\0') {
		if ((s1[i] == '-') && (s1[i + 1] >= ch)) {
			i++;

			while (ch < s1[i]) {
				s2[j++] = ch++;
			}
		} else {
			s2[j++] = ch;
		}
	}

	s2[j] = '\0';
}
