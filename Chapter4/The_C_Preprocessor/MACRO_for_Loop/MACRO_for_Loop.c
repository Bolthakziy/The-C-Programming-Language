#include <stdio.h>

#define  KEEPGOING  while (1)

int main()
{
        char ch;

        KEEPGOING {
                printf("Enter your escaping number, if you want to be out of this loop! : ");
                scanf("%c", &ch);

                if (ch == 'X') {
                    break;
                } else {

                }

                getchar();
        }

        return 0;
}