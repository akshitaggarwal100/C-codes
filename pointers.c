#include <stdio.h>

int main()
{
    int number = 5;
    int *ptr = &number;

    int **i = &ptr;

    printf("value of number: %d\n", number);
    printf("address of number: %u\n", &number);
    printf("address of number through pointer variable: %u\n", ptr);
    printf("address of pointer variable: %u\n", &ptr);
    printf("address of pointer variable through pointer to pointer variable: %u", i);

    return 0;
}