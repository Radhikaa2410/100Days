//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter value\n");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("Sum of digits:%d",sum);
    return 0;
}