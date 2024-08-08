#include <stdio.h>

int main()
{
    
    // meter no assumed to be 1912
    // previous reading assumed to be 100
    int meterNo = 1912, prevReading = 100, currReading;
    unsigned int unitsConsumed;
    printf("Meter number: %d\n", meterNo);
    printf("Previous Reading: %d\n\n", prevReading);

    // current meter reading entered by user
    printf("Enter current meter reading: ");
    scanf("%d", &currReading);

    // units consumed calculated
    printf("\nUnits consumed: %d\n", currReading - prevReading);

    // displaying tariff charges
    printf("\n*************Tariff charges*************\n");
    printf("Domestic charges\n");
    printf("Less than 200 units                      @1.2/unit\n");
    printf("More than 200 and upto 400 units         @1.5/unit\n");
    printf("More than 400 and upto 600 units         @1.8/unit\n");
    printf("More than 600                            @2.0/unit\n\n");

    printf("Non-Domestic charges                     @2.0/unit\n\n");

    printf("Industrial charges                       @2.5/unit\n");

    printf("\n************Electricity Bill************\n\n");

    printf("Enter Unit consumed per month: ");
    scanf("%d", &unitsConsumed);
    char *dueDate = "15/6/23";

    if (unitsConsumed < 200)
    {
        printf("\nBill amount payable: %f\n", unitsConsumed * 1.2);
    }

    else if (unitsConsumed < 400)
    {
        printf("\nBill amount payable: %f\n", unitsConsumed * 1.5);
    }

    else if (unitsConsumed < 600)
    {
        printf("\nBill amount payable: %f\n", unitsConsumed * 1.8);
    }

    else
    {
        printf("\nBill amount payable: %f\n", unitsConsumed * 2.0);
    }
    printf("Bill due date: %s", dueDate);

    return 0;
}