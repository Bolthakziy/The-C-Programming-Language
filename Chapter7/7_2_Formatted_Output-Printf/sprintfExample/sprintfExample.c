#include <stdio.h>

char buffer[256];

int main()
{
	char *str1 = "Aleksander Kanin";
	int age = 16;
	char gender = 'M';

	sprintf(buffer, "Name : %s\n", str1);
	printf("%s", buffer);
	sprintf(buffer, "Age : %d\n", age);
	printf("%s", buffer);
	sprintf(buffer, "Gender : %c\n", gender);
	printf("%s", buffer);

	return 0;
}
