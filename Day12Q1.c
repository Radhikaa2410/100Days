/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main()
{
    int n, fine;
    printf("Enter number of days you were late for\n");
    scanf("%d",&n);
    if(n>=1&&n<=5)
    {
        fine=n*2;
    }
    else if(n>5&&n<=10)
    {
        fine=10+(n-5)*4;
    }
    else if(n>10&&n<=30)
    {
        fine=30+(n-10)*6;
    }
    else if(n>30)
    {
        printf("Membership cancelled");
    }
    else
    {
        printf("Invalid");
        return 0;
    }
    printf("Fine:%d",fine);
    return 0;
}