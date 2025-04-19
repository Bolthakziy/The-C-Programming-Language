#include <stdio.h>

int main()
{
	int num;

	printf("Do you want to know the result of \'UNKNOWN_FUNCTION\'?\n");
	printf("Then enter your number. I will show you. : ");
	scanf("%d", &num);

#define  UNKNOWN_FUNCTION(X)  (X) * (X + 1)
	printf("\n\n1st result of \'UNKNOWN_FUNCTION\' : %d\n\n", UNKNOWN_FUNCTION(num));
#undef   UNKNOWN_FUNCTION

#define  UNKNOWN_FUNCTION(X)  (X) + 24
	printf("\n2nd result of \'UNKNOWN_FUNCTION\' : %d\n\n", UNKNOWN_FUNCTION(num));
#undef   UNKNOWN_FUNCTION
	printf("2 results from \'UNKNOWN_FUNCTION\' are different. It is mysterious.\n");

	return 0;
}
