#include <stdio.h>

void add_sparse(int *m1, int *m2, int *res, int count)
{
    for (int i = 0; i < count; i++)
    {
    }
}

// 0,0,3
// 1,1,4
// 2,2,5

// 0,0,1
// 1,2,4
// 2,2,2

int sparse1[10][3] = {
    {3, 3, 3},
    {0, 0, 3},
    {1, 1, 4},
    {2, 2, 5}};

int sparse1[10][3] = {
    {3, 3, 3},
    {0, 0, 1},
    {1, 2, 4},
    {2, 2, 2}};

int result[10][3];

void add(int m1[][3], int m2[][3], int res[][3])
{
    int nonZeroVals1 = m1[0][2];
    int nonZeroVals2 = m2[0][2];
    int count = 1;

    for (int i = 1; i < nonZeroVals1; i++)
    {
        if (m1[i][0] == m2[i][0] && m1[i][1] == m2[i][1])
        {
            res[count][0] = m1[i][0];
            res[count][1] = m1[i][1];
            res[count][2] = m1[][]
        }
    }
    
}

int main()
{

    return 0;
}