#include <stdio.h>

int comaprison = 0;
int division = 0;

int search(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {
        comaprison++;
        mid = (start + end) / 2;
        if (num == arr[mid])
        {
            comaprison++;
            return mid;
        }
        else if (num > arr[mid])
        {
            comaprison += 2;
            start = mid + 1;
            division++;
        }
        else
        {
            end = mid - 1;
            division++;
        }
    }
    comaprison++;

    return 0;
}

int main()
{
    int arr[] = {14, 7, 22, 24, 39, 20, 90, 10, 15, 6};

    int index = search(arr, 10, 29);

    index ? printf("29 is found in array at the index: %d\n", index) : printf("29 is not found in array.\n");
    printf("Number of comaparisons: %d\n", comaprison);
    printf("Number of divisions: %d\n", division);

    return 0;
}