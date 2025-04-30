#include <stdio.h>

#define  DYR  0

#if  DYR == 0
	const char* greet = "Jeg er Alexander Kat!\n";
#elif  DYR == 1
	const char* greet = "Jeg hedder Laura Kat!\n";
#elif  DYR == 2
	const char* greet = "Mit navn er Daniel Kanin!\n";
#else
	const char* greet = "Jeg er Han And og en fugl!\n";
#endif

int main()
{
	printf("%s", greet);

	return 0;
}
