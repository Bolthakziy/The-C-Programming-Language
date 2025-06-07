#include <stdio.h>

char *month_name(int n);

int main()
{
	int month;

	printf("Wprowadz miesiac! : ");
	scanf("%d", &month);
	printf("Teraz jest %s!\n", month_name(month));

	return 0;
}

char *month_name(int n)
{
	static char *name[] = {
		"Bledny Miesiac",
		"Styczen", "Luty", "Marzec",
		"Kwiecien", "Maj", "czerwiec",
		"Lipiec", "Sierpien", "Wrzesien",
		"Pazdziernik", "Listopad", "Grudzien"
	};

	return (((n < 1) || (n > 12)) ? name[0] : name[n]);
}
