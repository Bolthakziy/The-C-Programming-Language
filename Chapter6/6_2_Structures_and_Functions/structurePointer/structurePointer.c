#include <stdio.h>

struct LUDZIE
{
	char name[32];
	int age;
	char gender;
};

struct LUDZIE mezczyzna = {
	"Aleksander Zajaz",
	36,
	'M'
};

struct LUDZIE kobieta = {
	"Malgozana Kaczka",
	37,
	'F'
};

int main()
{
	struct LUDZIE *man, *woman;
	man = &mezczyzna;
	woman = &kobieta;

	printf("Name : %s\n", man->name);
	printf("Age : %d\n", man->age);
	printf("Gender : %c\n", man->gender);

	printf("Name : %s\n", woman->name);
	printf("Age : %d\n", woman->age);
	printf("Gender : %c\n", woman->gender);

	return 0;
}
