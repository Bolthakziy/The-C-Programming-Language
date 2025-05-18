#include <stdio.h>

int myStrlen(char* str);

int main()
{
	char ARabbitAndADuck[14] = {'Z', 'A', 'J', 'A', 'C', ' ', 'i', ' ', 'K', 'A', 'C', 'Z', 'K', 'A'};

	printf("The length of the array \'ARabbitAndADuck\' : %d\n", myStrlen(ARabbitAndADuck));

	return 0;
}

int myStrlen(char* str)
{
	int count;

	for (count = 0; *str != '\0'; str++) {
		count++;
	}

	return count;
}
