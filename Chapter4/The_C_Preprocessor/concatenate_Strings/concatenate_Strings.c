#include <stdio.h>

#define  connect(A, B)  A ## B

int main()
{
    int x3[5] = {1, 3, 5, 7, 9};
    int y7[5] = {21, 23, 25, 27, 29};
    int idx;

    for (idx = 0; idx < 5; ++idx) {
        printf("%d : %d\n", idx, connect(x, 3)[idx] + connect(y, 7)[idx]);
    }

    return 0;
}