#include <stdio.h>

typedef char  SIZE8;
typedef short SIZE16;
typedef int   SIZE32;

int main()
{
	SIZE8 a;
	SIZE16 b;
	SIZE32 c;

	printf("The sizes of several variants.\n\n\n");
	printf("SIZE8 : %ld\n", sizeof(SIZE8));
	printf("SIZE16 : %ld\n", sizeof(SIZE16));
	printf("SIZE32 : %ld\n", sizeof(SIZE32));

	return 0;
}
