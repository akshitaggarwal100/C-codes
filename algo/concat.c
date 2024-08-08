#include <stdio.h>

int main()
{
    char a[] = "Akshit";
    char b[] = "Agg";

    int lenA = sizeof(a) / sizeof(char);
    int lenB = sizeof(b) / sizeof(char);

    char c[lenA + lenB - 1];

    for (int i = 0; i < lenA - 1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < lenB; i++)
    {
        c[lenA - 1 + i] = b[i];
    }

    for (int i = 0; i < lenA + lenB - 1; i++)
    {
        printf("%c", c[i]);
    }
    printf("\n");
    printf("No. of times the loop will run: %d", lenA + lenB - 1);

    return 0;
}