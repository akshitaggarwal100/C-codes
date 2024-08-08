#include <stdio.h>

int mysqrt(int num)
{
    int i;
    int isSqrt = 0;
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        if (i * i == num)
        {
            isSqrt = 1;
            break;
        }
        else if (i * i > num)
        {
            break;
        }
    }
    if (isSqrt)
    {
        return i;
    }
    else
    {
        return --i;
    }
}

int mysqrtbetter(int num)
{
    int start = 1;
    int end = num;
    int mid, sqr;
    int count = 0;
    while (start <= end)
    {
        printf("%d\n", ++count);
        mid = (start + end) / 2;
        sqr = mid * mid;

        if (sqr > num)
        {
            end = mid - 1;
        }
        else if (sqr < num)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return end;
}

int main()
{
    printf("\n%d\n", mysqrt(200));
    printf("\n%d\n", mysqrtbetter(200));
    return 0;
}