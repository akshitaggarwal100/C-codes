#include <stdio.h>
#define S 3

void mul(int a[S][S], int b[S][S], int r[S][S], int r1, int c2, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void display(int a[S][S], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[S][S] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    int b[S][S] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    int r[S][S] = {0};

    mul(a, b, r, S, S, S);

    display(r, S, S);

    return 0;
}