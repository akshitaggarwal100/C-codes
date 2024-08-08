#include <stdio.h>

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n + i; j++)
        {
            if (j >= n - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 2 * (n - 1) - i; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    pattern2(4);
}