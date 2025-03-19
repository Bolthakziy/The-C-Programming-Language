#include <stdio.h>
#include <string.h>

char message[10] = "Alexander";

void connect_Words(char* dest, char* srcs);

int main()
{
	char addedMessage[5] = " Kat";

	printf("Message : %s\n", message);
	connect_Words(message, addedMessage);
	printf("Message is modified.\n");
	printf("Message : %s\n", message);

	return 0;
}

void connect_Words(char* dest, char* srcs)
{
	strcat(dest, srcs);
}
