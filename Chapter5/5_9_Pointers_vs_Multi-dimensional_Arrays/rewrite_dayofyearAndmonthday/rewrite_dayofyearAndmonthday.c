#include <stdio.h>

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main()
{
	int year, month, day, yearDay;

	printf("Input today's date! : ");
	scanf("%d %d %d", &year, &month, &day);
	yearDay = day_of_year(year, month, day);
	printf("The day of your year : %d\n", yearDay);
	month_day(year, yearDay, &month, &day);
	printf("Your day\'s month : %d\tday : %d\n", month, day);

	return 0;
}

int day_of_year(int year, int month, int day)
{
	int leap;
	char *p;

	leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	p = daytab[leap];

	while (--month) {
		day += *++p;
	}

	return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int leap;
	char *p;

	leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	p = daytab[leap];

	while (yearday > *++p) {
		yearday -= *p;
	}

	*pmonth = p - *(daytab + leap);
	*pday = yearday;
}
