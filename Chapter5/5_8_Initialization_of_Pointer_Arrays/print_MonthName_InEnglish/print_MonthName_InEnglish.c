#include <stdio.h>

char *month_name(int n);

int main()
{
	int month;

	printf("Enter the month of this time! : ");
	scanf("%d", &month);
	printf("Now it is %s!\n", month_name(month));

	return 0;
}

char *month_name(int n)
{
	static char *name[] = {
		"Wrong month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};

	return (((n < 1) || (n > 12)) ? name[0] : name[n]);
}
