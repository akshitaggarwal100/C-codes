#include <stdio.h>
#include <stdbool.h>

int main()
{
    // bool flag = true;
    // int i1 = 1;
    // int i2 = 1;

    int a = 2;
    int b = 8;

    // int temp1 = a;
    // int temp2 = b;

    // while (temp1 != temp2)
    // {
    //     printf("%d, %d\n", temp1, temp2);
    //     if (temp1 > temp2)
    //     {
    //         temp2 = b * i2;
    //         ++i2;
    //     }
    //     else
    //     {
    //         temp1 = a * i1;
    //         ++i1;
    //     }
    // }
    // printf("%d", temp1);
    // return 0;

    int max = (a > b) ? a : b;

    while (1) {
        printf("%d\n", max);
        if ((max % a == 0) && (max % b == 0)) {
            printf("The LCM of %d and %d is %d.", a, b, max);
            break;
        }
        ++max;
    }
}