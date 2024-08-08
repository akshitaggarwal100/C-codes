#include <stdio.h>
#include <stdlib.h>

int isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
        break;

    default:
        return 0;
    }
}

int main()
{
    FILE *f1 = fopen("main.txt", "r");

    char ch = fgetc(f1);
    int count = 0;
    int isSame = 0;

    while (ch != EOF)
    {
        if (isVowel(ch) && !isSame)
        {
            count++;
            isSame = 1;
        }

        else if(ch == ' ')
        {
            isSame = 0;
        }

        ch = fgetc(f1);
    }

    printf("%d", count);

    fclose(f1);
    return 0;
}