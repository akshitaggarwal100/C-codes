#include <stdio.h>

int ifDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 4, 7, 1};
    printf("%d\n", ifDuplicate(arr, 4));
    return 0;
}