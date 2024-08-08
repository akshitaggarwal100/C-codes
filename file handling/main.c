#include <stdlib.h>
#include <stdio.h>

int main()
{
    // opening first file in read mode
    FILE *f1 = fopen("main.txt", "r");
    // opening second file in write mode
    FILE *f2 = fopen("main2.txt", "w");

    char ch = fgetc(f1);
    while (ch != EOF)
    {
        fputc(ch, f2);
        ch = fgetc(f1);
    }

    // closing the files
    fclose(f1);
    fclose(f2);
    return 0;
}