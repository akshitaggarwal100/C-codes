#include <stdio.h>

int *binarySearch(int arr[], int size, int num, int ans[])
{
    int start = 0;
    int end = size - 1;
    int mid;
    int count = 0;
    int pos = -1;

    int answer[] = {count, pos};

    while (start <= end)
    {
        mid = (start + end) / 2;
        count++;
        if (arr[mid] == num)
        {
            pos = mid;
            break;
        }

        else if (arr[mid] > num)
        {
            end = mid - 1;
        }

        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int arr[] = {2, 4, 7, 15, 19};
    int len = sizeof(arr) / sizeof(int);

    int ans[2];

    *ans = binarySearch(arr, len, 15, ans);

    printf("%d, %d", ans[0], ans[1]);

    return 0;
}