#include <stdio.h>

int main()
{
	int* pt;
	int x = 32;
	pt = &x;

	printf("1st operation \'*pt * 2\' : %d\n", *pt * 2);
	printf("2nd operation \'*pt / 8\' : %d\n", *pt / 8);
	printf("3rd operation \'(*pt)++ : %d\n", (*pt)++);
	printf("4th operation \'*pt / 11\' : %d\n", *pt / 11);
	*pt /= 11;
	printf("Final number that \'pt\' points! : %d\n", *pt);

	return 0;
}
