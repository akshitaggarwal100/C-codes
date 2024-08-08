#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (arr[j - 1] > arr[j] && j > 0)
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
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
    int arr[] = {7, 1, 3, 5, 2, 6};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    sort(arr, size);
    display(arr, size);

    return 0;
}