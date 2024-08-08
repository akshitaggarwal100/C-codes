#include <stdio.h>

int hcf(int num1, int num2)
{
    int smallest = num1 < num2 ? num1 : num2;

    for (int i = smallest; i > 0; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }

    return 1;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", hcf(num1, num2));

    return 0;
}