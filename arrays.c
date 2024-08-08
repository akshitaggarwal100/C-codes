#include <stdio.h>
#define SIZE 5

int main()
{
    int ar[SIZE] = {89, 98, 97, 90, 95};
    int num;
    int min_pos, temp;

    for (int i = 0; i < SIZE - 1; i++)
    {
        min_pos = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (ar[j] < ar[min_pos])
            {
                min_pos = j;
            }
        }
        temp = ar[i];
        ar[i] = ar[min_pos];
        ar[min_pos] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", ar[i]);
    }

    return 0;
}