#include <stdio.h>

unsigned long int next = 1;

int myRand(void);
void mySrand(unsigned int seed);

int main()
{
	unsigned int a;

	printf("Enter your any real number. : ");
	scanf("%d", &a);
	mySrand(a);
	printf("Your converted random number is %d\n", myRand());

	return 0;
}

int myRand(void)
{
	next = next * 1103515245 + 12345;

	return (unsigned int)(next / 65535) % 32768;
}

void mySrand(unsigned int seed)
{
	next = seed;
}
