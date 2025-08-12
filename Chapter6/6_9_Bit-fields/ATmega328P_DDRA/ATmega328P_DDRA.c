#include <stdio.h>

typedef struct REGISTER
{
	unsigned int DDA0 : 1;
	unsigned int DDA1 : 1;
	unsigned int DDA2 : 1;
	unsigned int DDA3 : 1;
	unsigned int DDA4 : 1;
	unsigned int DDA5 : 1;
	unsigned int DDA6 : 1;
	unsigned int DDA7 : 1;

} AVRRegister;

int main()
{
	AVRRegister DDRA;
	int x;

	printf("There are 8 LEDs.\n");
	printf("Enter the LED number that you want to turn on. : ");
	scanf("%d", &x);

	switch (x) {
		case 0 :
			DDRA.DDA0 = 1;
			break;
		case 1 :
			DDRA.DDA1 = 1;
			break;
		case 2 :
			DDRA.DDA2 = 1;
			break;
		case 3 :
			DDRA.DDA3 = 1;
			break;
		case 4 :
			DDRA.DDA4 = 1;
			break;
		case 5 :
			DDRA.DDA5 = 1;
			break;
		case 6 :
			DDRA.DDA6 = 1;
			break;
		case 7 :
			DDRA.DDA7 = 1;
			break;
		default :
			break;
	}

	printf("DDRA : %x\n", DDRA);

	return 0;
}
