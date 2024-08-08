#include <stdio.h>

int isPalin(int num)
{
    int dup = num;
    int rev = 0;
    while (num > 0)
    {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }

    if (rev == dup) return 1;
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", isPalin(num));
    return 0;
}