#include <stdio.h>

typedef union U
{
	char ch;
	short s;
	int i;
} u;

int main()
{
	u _u;

	printf("Input the value of a character variant. : ");
	scanf("%c", &(_u.ch));
	printf("Char : %x\n", _u.ch);
	printf("Short : %x\n", _u.s);
	printf("Int : %x\n\n\n", _u.i);
	
	printf("Input the value of a short variant. : ");
	scanf("%hi", &(_u.s));
	printf("Char : %x\n", _u.ch);
	printf("Short : %x\n", _u.s);
	printf("Int : %x\n\n\n", _u.i);
	
	printf("Input the value of a int variant. : ");
	scanf("%d", &(_u.i));
	printf("Char : %x\n", _u.ch);
	printf("Short : %x\n", _u.s);
	printf("Int : %x\n\n\n", _u.i);

	return 0;
}
