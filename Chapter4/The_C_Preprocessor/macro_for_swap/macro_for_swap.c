#include <stdio.h>

#define  myswap(t, x, y)  {     t temp;     \
                                temp = y;   \
                                y = x;      \
                                x = temp;   }

int main()
{
    double a, b;

    printf("Enter your 2 real numbers. : ");
    scanf("%lf %lf", &a, &b);
    printf("First number : %lf\n", a);
    printf("Second number : %lf\n\n\n", b);
    printf("Now your two numbers are interchanged.\n\n\n");
    myswap(double, a, b);
    printf("First number : %lf\n", a);
    printf("Second number : %lf\n", b);

    return 0;
}