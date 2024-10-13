#include <stdio.h>

int htoi(char s[]);

int main()
{
	char hexaString[20];
	int convertedNumber;

	printf("Enter your hexa number. : ");
	scanf("%s", hexaString);
	printf("Your hexa number is 0x%s.\n", hexaString);
	convertedNumber = htoi(hexaString);
	printf("Your number is converted a digit number like that; %d.\n", convertedNumber);

	return 0;
}

int htoi(char s[])
{
	int i, h = 0;

	for (i = 0; s[i] != '\0'; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			h = h * 16 + (s[i] - '0');
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			h = h * 16 + (s[i] - 'A' + 10);
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			h = h * 16 + (s[i] - 'a' + 10);
		} else {

		}
	}

	return h;
}
