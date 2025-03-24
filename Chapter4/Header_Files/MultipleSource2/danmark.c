#include <stdio.h>
#include <string.h>
#include "danmark.h"

void do_LEGO(void)
{
	printf("Let\'s play LEGO!\n");
}

char own_Greenland(void)
{
	printf("Greenland belongs to Danmake!\n");

	return 'Y';
}

char make_CPlusPlus(char name[])
{
	char answer;

	if (strcmp(name, "Stroustrup") == 0) {
		answer = 'Y';
	} else {
		answer = 'N';
	}

	return answer;
}
