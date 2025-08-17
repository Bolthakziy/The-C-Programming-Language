#include <stdio.h>

int main()
{
	int x = 123;
	short y = 1234;
	char *str = "En kanin og en and";
	double PI = 3.1415926535897932384626433832;
	int *ptr;
	ptr = &x;

	printf("x : %d\n", x);
	printf("x : 0%x\n", x);
	printf("x : 0x%x\n", x);
	printf("y : %hd\n", y);
	printf("str : %s\n", str);
	printf("PI : %lf\n", PI);
	printf("PI : %e\n", PI);
	printf("PI : %g\n", PI);
	printf("ptr : %p\n", ptr);

	return 0;
}
