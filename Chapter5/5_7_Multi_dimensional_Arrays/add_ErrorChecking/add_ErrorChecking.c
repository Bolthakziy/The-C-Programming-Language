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
	int i, leap;

	leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	if ((month < 1) || (month > 12)) {
		return -1;
	} else {
	
	}

	if ((day < 1) || (day > daytab[leap][month])) {
		return -1;
	}

	for (i = 1; i < month; i++) {
		day += daytab[leap][i];
	}

	return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	if (year < 1) {
		*pmonth = -1;
		*pday = -1;

		return;
	} else {
	
	}

	leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	for (i = 1; yearday > daytab[leap][i]; i++) {
		yearday -= daytab[leap][i];
	}

	if ((i > 12) && (yearday > daytab[leap][12])) {
		*pmonth = -1;
		*pday = -1;
	} else {
		*pmonth = i;
		*pday = yearday;
	}
}
