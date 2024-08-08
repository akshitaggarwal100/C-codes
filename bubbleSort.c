#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    int numSwaps = 0;
    int numLoops = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            numLoops++;
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                numSwaps++;
            }
        }
        printf("List after pass %d: ", i+1);
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
    printf("Total number of exchange operations: %d\n", numSwaps);
    printf("Total number of loop executions: %d\n", numLoops);
}

int main() {
    int arr[] = {17, 25, 32, 4, 7, 19, 81, 45, 1, 33};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
