#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int c = gcd(34, 16);
    printf("%d", c);
    return 0;
}