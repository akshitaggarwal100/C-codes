#include <stdio.h>
#include <conio.h>

void input(char prompt[], char store[], int len, int secured)
{
    printf("%s: ", prompt);
    if (secured > 0)
    {
        int i = 0;
        char ch;
        while (i < len - 1)
        {
            ch = getch();
            if (ch == 13)
            {
                store[i] = '\0';
                printf("\n");
                break;
            }
            else
            {
                printf("*");
                store[i++] = ch;
            }
        }
    }
    else
    {
        gets(store);
    }
}

int main()
{
    char name[20];
    char city[10];
    char pass[10];
    char product[20];
    input("Enter name", name, 20, 0);
    input("Enter city", city, 10, 0);
    input("Enter pass", pass, 10, 1);
    input("Enter product", product, 20, 0);

    printf("\nOrder Summary\n");
    printf("Name: %s\n", name);
    printf("City: %s\n", city);
    printf("Product: %s\n", product);
    printf("Pass: %s\n", pass);
    return 0;
}