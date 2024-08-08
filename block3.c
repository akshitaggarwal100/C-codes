#include <stdio.h>

int main()
{
    int number1, number2;
    void fizzbuzz(int);

    printf("Enter Number: ");
    scanf("%d", &number1);

    printf("Enter Number: ");
    scanf("%d", &number2);

    if (number1 - number2 > 0)
    {
        printf("%d is greater than %d", number1, number2);
    }

    else if (number1 - number2 < 0)
    {
        printf("%d is greater than %d", number2, number1);
    }

    else
    {
        printf("Equal");
    }

    // fizzbuzz(number);
}

void fizzbuzz(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (i % 15 == 0)
        {
            printf("fizzbuzz\n");
        }

        else if (i % 3 == 0)
        {
            printf("fizz\n");
        }

        else if (i % 5 == 0)
        {
            printf("buzz\n");
        }

        else
        {
            printf("%d\n", i);
        }
    }
}