#include <stdio.h>

int strend(char *s, char *t);

int main()
{
	char str1[32], str2[32];

	printf("Enter your 1st string! : ");
	scanf("%[^\n]%*c", str1);
	printf("Then enter your 2nd string! : ");
	scanf("%[^\n]%*c", str2);

	if (!strend(str1, str2)) {
		printf("There is no realtions....\n");
	} else {
		printf("Your 2nd string starts at the end of your 1st string!\n");
	}

	return 0;
}

int strend(char *s, char *t)
{
	char *bs = s, *bt = t;

	for (; *s; s++);
	for (; *t; t++);

	for (; *s == *t; s--, t--) {
		if (t == bt || s == bs) {
			break;
		} else {

		}
	}

	if ((*s == *t) && (t == bt) && (*s != '\0')) {
		return 1;
	} else {
		return 0;
	}
}
