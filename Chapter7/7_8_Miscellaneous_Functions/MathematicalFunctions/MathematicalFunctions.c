#include <stdio.h>
#include <math.h>

const double PI = 3.14159265358979323846;

int main()
{
	printf("sin(30) = %lf\n", sin(PI / 6.0));
	printf("cos(60) = %lf\n", cos(PI / 3.0));
	printf("atan2(3, 3) = %lf\n", atan2(3, 3));
	printf("exp(-2) = %lf\n", exp(-2));
	printf("log(128) = %lf\n", log(128));
	printf("log10(10000) = %lf\n", log10(10000));
	printf("pow(3, 4) = %lf\n", pow(3, 4));
	printf("sqrt(196) = %lf\n", sqrt(196));
	printf("fabs(-72.39) = %lf\n", fabs(-72.39));

	return 0;
}
