#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {35, 25, 15, 5, 14, 18, 16, 13, 17, 19};
    int length = sizeof(arr) / sizeof(int);
    int comparison = 0;

    for (int i = 0; i < length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            comparison++;
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    display(arr, length);

    printf("%d", comparison);

    return 0;
}