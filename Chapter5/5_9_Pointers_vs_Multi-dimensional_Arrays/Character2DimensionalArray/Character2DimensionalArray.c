#include <stdio.h>

char zwierze[][7] = {"Mysz", "Zajac", "Kura", "Kon", "Pies", "Kot", "Tygrys"},
     liczby[][9] = {"Pierwszy", "Drugi", "Trzeci", "Czwarty", "Piaty", "Szosty", "Siodmy"};

int main()
{
	int i;

	for (i = 0; i < 7; ++i) {
		printf("%s zwierze : %s\n", liczby[i], zwierze[i]);
	}

	return 0;
}
