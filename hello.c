#include <stdio.h>

int main()
{
    int age;
    float discount, fare, finalFare;
    printf("Enter your age: ");
    scanf("%i", &age);
    printf("\nEnter your fare: ");
    scanf("%f", &fare);

    if (age > 50)
    {
        printf("Your discount is %f\n", discount = 0.2 * fare);
        printf("Your discounted fare is %f\n", finalFare = fare - discount);
    }
    else
    {
        if (age <= 14)
        {
            printf("Your discount is %f\n", discount = 0.5 * fare);
            printf("Your discounted fare is %f\n", finalFare = fare - discount);
        }

        else
        {
            printf("Your discount is %f\n", discount = 0.1 * fare);
            printf("Your discounted fare is %f\n", finalFare = fare - discount);
        }
    }

    return 0;
}