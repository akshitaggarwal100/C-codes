#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vowels[] = "aeiou";
    char str[15];
    int count = 0;
    gets(str);

    int strLen = sizeof(str) / sizeof(char);

    for (int i = 0; i < strLen; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}