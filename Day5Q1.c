//Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>  

int main() 
{
    float pr, rate, time;
    float si, ci, amt;
    printf("Enter Principal Amount: ");
    scanf("%f", &pr);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    si = (pr * rate * time) / 100.0;
    amt = pr * pow((1 + rate / 100.0), time);
    ci = amt - pr;
    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f\n", ci);
    return 0;
}
