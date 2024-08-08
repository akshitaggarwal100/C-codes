#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool flag = true;
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    int temp = 1;
    while (flag && temp < num / 2)
    {
        if (num % ++temp == 0)
        {
            printf("%i", temp);
            flag = false;
            break;
        }
    }
    printf("%i", 1);
    return 0;
}