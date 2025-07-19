#include <stdio.h>

struct TEST
{
	int i;
	char c;
};

int main()
{
	struct TEST t;
	int size;

	printf("A struct varialbe \'t\' consists of an integer variable and a character varible.\n");
	printf("So i think the size of \'t\' is 5 bytes.\n");
	printf("Let\'s check it!\n..... ..... .....\n..... ..... ..... .....\n..... ..... .....\n");
	printf("The size of \'t\' : %d bytes\n", sizeof(struct TEST));
	size = sizeof(struct TEST);

	if (size == 5) {
		printf("I am right!\n");
	} else {
		printf("I was wrong....\n");
	}

	return 0;
}
