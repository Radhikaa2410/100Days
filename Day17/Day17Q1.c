//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, c=0, d, num1,num2,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    num2=n;
    int temp1=n;
    while(n>0)
    {
       c++;
       n=n/10;
    }
    while(temp1>0)
    {
       d=temp1%10;
       num1=pow(d,c);
       sum=sum+num1;
       temp1=temp1/n;
    }
    if(num2==sum)
    {
        printf("Given number is armstrong number");
    }
    else
    {
        printf("Given number is not armstrong number");
    }
    return 0;
}