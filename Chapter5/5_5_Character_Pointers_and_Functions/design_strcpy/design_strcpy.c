#include <stdio.h>

void myStrcpy(char* dest, char* srcs);

int main()
{
	char str1[17] = "Gosia lubi kote.", str2[17] = "";

	printf("str2 : %s\n", str2);
	printf("\'str2\' is vacant.\n");
	printf("But \'str2\' will copy the content of \'str1\'.\n");
	myStrcpy(str2, str1);
	printf("The copy is completed.\n");
	printf("str2 : %s\n", str2);

	return 0;
}

void myStrcpy(char* dest, char* srcs)
{
	while (*dest++ = *srcs++);
}
