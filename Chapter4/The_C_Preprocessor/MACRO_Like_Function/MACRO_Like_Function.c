#include <stdio.h>

#define  first_square(X)  X * X
#define  second_square(X)  (X) * (X)

int main()
{
        int num;

        printf("Enter your number. : ");
        scanf("%d", &num);
        printf("We will get the square of the number that plus your number to 1.\n");
        printf("First square macro : %d\n", first_square(num + 1));
        printf("Second square macro : %d\n", second_square(num + 1));
        printf("I think second macro can get the exact value!\n");

        return 0;
}