#include <stdio.h>

typedef enum
{
	KATT = 1,
	KANIN,
	AND
} DYR;

int main()
{
	DYR dyr;
	int choose;

	printf("1. Cat\t2. Rabbit\t3. Duck\n");
	printf("Choose your animal! : ");
	scanf("%d", &choose);

	switch (choose) {
		case KATT :
			printf("Hallo, jeg er Daniel Katt!\n");
			break;
		case KANIN :
			printf("Hei, jeg heter Aleksander Kanin!\n");
			break;
		case AND :
			printf("Jeg er Hanna And og en fugl!\n");
			break;
		default :
			break;
	}

	return 0;
}
