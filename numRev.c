#include <stdio.h>

int rev(int num) {
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;
        rev *= 10;
        rev += rem;
    }
    return rev;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", rev(num));
    return 0;
}