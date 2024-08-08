#include <stdio.h>
#include <string.h>

int main()
{
    
    char name[] = "Akshit";
    greet(name);
    return 0;
}

void greet(name)
{
    printf("Greetings, %s", name);
}