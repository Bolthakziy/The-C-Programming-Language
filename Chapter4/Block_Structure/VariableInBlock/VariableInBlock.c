#include <stdio.h>

int main()
{
        int number, n = 9;

        printf("Enter your number. : ");
        scanf("%d", &number);

        if (number > 9) {
            int n = 77;

            if (number >= n) {
                printf("It is very good.\n");
            } else {
                printf("It is not good....\n");
            }
        } else {
            printf("Your number is too small....\n");
        }

        printf("The value of \'n\' : %d\n", n);

        return 0;
}