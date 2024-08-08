#include <stdio.h>

int main()
{
    char str[] = "ABCDEFGHIJ";
    int swaps = 0;
    int run = 0;
    int comparisons = 0;

    int len = sizeof(str) / sizeof(char) - 1;

    printf("Original: %s\n", str);

    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        swaps++;
        comparisons++;
        run++;
        start++;
        end--;
    }
    comparisons++;

    printf("Reversed: %s\n", str);
    printf("Total number of exchange operations: %d\n", swaps);
    printf("Total number of comparison operations: %d\n", comparisons);
    printf("Total number of times the loop will execute: %d\n", run);

    return 0;
}