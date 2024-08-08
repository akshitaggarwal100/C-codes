#include <stdio.h>

void display_sparse(int mat[10][3], int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[3][3] = {
        {1, 2, 3},
        {6, 0, 0},
        {0, 0, 4}};

    int sparse[10][3];
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m1[i][j] != 0)
            {
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = m1[i][j];
                count++;
            }
        }
    }

    display_sparse(sparse, count);

    return 0;
}