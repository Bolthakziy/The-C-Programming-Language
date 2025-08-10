#include <stdio.h>

typedef struct SYMTAB
{
	int flag;
	char set;
	union
	{
		int i;
		short s;
		char *name;
	} u;
} symtab;

int main()
{
	symtab _symtab;
	_symtab.flag = 1;
	_symtab.set = 'Y';
	_symtab.u.name = "AleksanderKanin";

	printf("Flag : %d\n", _symtab.flag);
	printf("SET : %c\n", _symtab.set);
	printf("Name : %s\n", _symtab.u.name);
	printf("Name[0] : %c\n", _symtab.u.name[0]);
	printf("Name[10] : %c\n", _symtab.u.name[10]);
	printf("The value of \'i\' : %d\n", _symtab.u.i);
	printf("the value of \'s\' : %hi\n", _symtab.u.s);

	return 0;
}
