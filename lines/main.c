#include <stdlib.h>
#include <stdio.h>

int main()
{
    // opening first file in read mode
    FILE *f1 = fopen("main.txt", "r");

    char ch = fgetc(f1);

    int count = 0;

    while (ch != EOF)
    {
        if (ch == '\n' || ch == '.')
        {
            count++;
        }
        ch = fgetc(f1);
    }
    
    printf("%d", count);

    // closing the files
    fclose(f1);
    return 0;
}