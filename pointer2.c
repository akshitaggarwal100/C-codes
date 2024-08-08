#include <stdio.h>

int main()
{
    void area(int l, int b);

    int l = 20;
    int b = 30;
    int a;

    area(l, b);

    return 0;
}

void area(int l, int b)
{
    int a = l * b;
}