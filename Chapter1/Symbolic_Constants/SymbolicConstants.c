#include <stdio.h>

#define  LOWER    0
#define  UPPER  250
#define  STEP    50

int main()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d  %6.1f\n", fahr, (5.0 / 9.0) * (float)(fahr - 32));
	}

	return 0;
}
