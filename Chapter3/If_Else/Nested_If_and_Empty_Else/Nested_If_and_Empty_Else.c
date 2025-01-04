#include <stdio.h>

int main()
{
	int number;

	printf("Input your number. : ");
	scanf("%d", &number);

	if ((number > 0) && (number <= 10)) {
		if (number > 5) {
			printf("%d%% is a high percent.\n", number * 10);
		} else {
			printf("%d%% is a low percent.\n", number * 10);
		}
	} else {

	}

	return 0;
}
