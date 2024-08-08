#include <stdio.h>
#include <math.h>

int main()
{
    int num, choice;
    printf("Enter number and choice: ");
    scanf("%i %i", &num, &choice);

    switch (choice)
    {
    case 1:
        printf("%i", num * num);
        break;
    case 2:
    case 4:
        printf("%i", sqrt(num));
        break;
    case 3:
        printf("%i", num * num * num);
        break;
    default:
        printf("%i", num);
    }
    return 0;
}