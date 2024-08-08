#include <stdlib.h>
#include <stdio.h>

int main()
{
    // opening first file in read mode
    FILE *f1 = fopen("one.txt", "r");
    // opening second file in read mode
    FILE *f2 = fopen("two.txt", "r");
    // opening third file in write mode
    FILE *f3 = fopen("three.txt", "a");

    char ch = fgetc(f1);

    while (ch != EOF)
    {
        fputc(ch, f3);
        ch = fgetc(f1);
        if (ch == EOF)
        {
            ch = fgetc(f2);
        }
    }

    // closing the files
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}