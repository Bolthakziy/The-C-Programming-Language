#include <stdio.h>
#include "dyr.h"

int main()
{
	int select = 5;

	printf("Choose a number then you can hear from animal friends.\n\n");
	printf("1. Alexander Kat\t2. Laura Kat\t3. Daniel Kanin\t4. Hans And\n");
	printf("0. End\n\n\n");

	while (select != 0) {
		printf("Enter a number you want. : ");
		scanf("%d", &select);

		switch (select) {
			case 1 :
				say_AlexanderKat();
				break;
			case 2 :
				say_LauraKat();
				break;
			case 3 :
				say_DanielKanin();
				break;
			case 4 :
				say_HansAnd();
				break;
			default :
				break;
		}
	}

	return 0;
}
