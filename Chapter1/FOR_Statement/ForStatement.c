#include <stdio.h>

int main()
{
	int fahr;

	for (fahr = 0; fahr <= 450; fahr = fahr + 30) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (float)(fahr - 32));
	}
}
