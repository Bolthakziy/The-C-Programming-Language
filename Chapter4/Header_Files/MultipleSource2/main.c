#include <stdio.h>
#include <string.h>
#include "danmark.h"
#include "norge.h"
#include "island.h"

int main()
{
	do_LEGO();
	printf("Does Greenland belong to Danmark?\n");
	printf("%c\n", own_Greenland());
	printf("Doctor \'Stroustrup\' made a computer language \'C++\'?\n");
	printf("%c\n", make_CPlusPlus("Stroustrup"));

	own_NordicSemiconductor();
	say_CapitalCity();
	printf("Are there lots of oil in Norway?\n");
	printf("%c\n", say_IsThereLotsofOil());

	say_areThereLotsofAurora();
	printf("Are there some waterfalls in Island?\n");
	printf("%c\n", say_isThereAWaterfall());

	return 0;
}
