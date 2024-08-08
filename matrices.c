#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][3] = {{1, 3, 2}, {2, 1, 1}, {1, 2, 2}};
    int m2[3][3] = {{1, 2, 2}, {2, 2, 3}, {1, 1, 2}};
    int res[3][3];
    int r1 = 3, c1 = 3, r2 = 3, c2 = 3;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            res[i][j] = sum;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d, ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}