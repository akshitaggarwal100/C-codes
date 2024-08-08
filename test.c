#include <math.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("File to be read: %s\n", argv[1]);
    FILE *filePtr = fopen(argv[1], "r");

    char ch = fgetc(filePtr);

    while (ch != EOF)
    {
        printf("%c\n", ch);
        ch = fgetc(filePtr);
        
    }

    fclose(filePtr);
}
