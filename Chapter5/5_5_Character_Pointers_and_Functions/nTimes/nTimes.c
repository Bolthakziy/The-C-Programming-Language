#include <stdio.h>
#include <string.h>

void myStrncpy(char *s, char *t, int n);
void myStrncat(char *s, char *t, int n);
int myStrncmp(char *s, char *t, int n);

int main()
{
	char str1[32] = "Gosia i Alek", str2[32] = "Zajac i Kaczka", str3[32];

	printf("String 1 : %s\n", str1);
	printf("String 2 : %s\n", str2);
	myStrncpy(str3, str1, 6);
	myStrncat(str3, str2, 6);

	if (!myStrncmp(str3, str1, 5)) {
		printf("Dorbze Gosia!\n");
	} else {
	
	}

	printf("String 3 : %s\n", str3);

	return 0;
}

void myStrncpy(char *s, char *t, int n)
{
	while (*t && n-- > 0) {
		*s++ = *t++;
	}

	while (n-- > 0) {
		*s++ = '\0';
	}
}

void myStrncat(char *s, char *t, int n)
{
	void myStrncpy(char *s, char *t, int n);

	myStrncpy(s + strlen(s), t, n);
}

int myStrncmp(char *s, char *t, int n)
{
	for (; *s == *t; s++, t++) {
		if ((*s == '\0') || (--n <= 0)) {
			return 0;
		} else {
		
		}
	}

	return (*s - *t);
}
