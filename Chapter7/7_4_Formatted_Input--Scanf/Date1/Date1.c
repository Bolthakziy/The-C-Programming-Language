#include <stdio.h>

int main()
{
	int day, year;
	char month[24];

	scanf("%d %s %d", &day, month, &year);
	printf("Year : %d\tMonth : %s\tDay : %d\n", year, month, day);

	return 0;
}
