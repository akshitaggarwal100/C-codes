#include <stdio.h>
#include <string.h>
#define sqr(x) (x * x)
#define ABS(x) x > 0 ? x : -x
#define QTY 20

#define add(a, b) (a + b)

int main()
{
    // int y = sqr(4);
    // printf("%d\n", y);

    // printf("%d\n", ABS(-2));

    // char str[] = "COBOL";

    // printf("%d", QTY);

    int num = 7;
    printf("Date: %s\n", __DATE__);

    return 0;
}

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}