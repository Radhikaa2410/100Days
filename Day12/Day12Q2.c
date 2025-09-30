/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

#include <stdio.h>

int main() 
{
    int unit;
    int bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &unit);
    if (unit > 0 && unit <= 100) 
    {
        bill = unit * 5;
    }
    else if (unit <= 200) 
    {
        bill = (100 * 5) + (unit - 100) * 7;
    }
    else if (unit <= 300) 
    {
        bill = (100 * 5) + (100 * 7) + (unit - 200) * 10;
    }
    else if (unit > 300) 
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (unit - 300) * 12;
    }
    else 
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Electricity Bill = %d\n", bill);
    return 0;
}