#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (num % 15 == 0)
    {
        printf("fizzbuzz");
    }

    else if (num % 3 == 0)
    {
        printf("fizz");
    }

    else if (num % 5 == 0)
    {
        printf("buzz");
    }

    else
    {
        printf("%d", num);
    }

    return 0;
}