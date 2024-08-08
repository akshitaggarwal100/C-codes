#include <stdio.h>

void quick(int arr[], int s, int e)
{
    
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    quick(arr, 0, size - 1);
    display(arr, size);
    return 0;
}