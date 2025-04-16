#include <stdio.h>
#include <stdlib.h>
#include "mathematics.h"

int main()
{
        char operation;
        int num1, num2;

        printf("Let\'s learn about mathematics!!!\n");
        printf("A : Sum\tB : Subtract\tC : Multiply\tD : Divide\tE : Exit\n\n\n");

        do {
                printf("Input your operation. : ");
                scanf("%c", &operation);

                if ((operation == 'E') || (operation == 'e')) {
                        exit(0);
                } else {
                        
                }

                printf("Enter your 2 numbers. : ");
                scanf("%d %d", &num1, &num2);

                switch (operation) {
                        case 'A' :
                        case 'a' :
                                do_Sum(num1, num2);
                                break;
                        case 'B' :
                        case 'b' :
                                do_Subtract(num1, num2);
                                break;
                        case 'C' :
                        case 'c' :
                                do_Multiply(num1, num2);
                                break;
                        case 'D' :
                        case 'd' :
                                do_Divide(num1, num2);
                                break;
                        default :
                                break;
            }

            getchar();
        } while (1);

        return 0;
}