//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int n,dig,sum=0;
    printf("Enter value ");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
       int fact=1;
       dig=n%10;
       for(int i=1;i<=dig;i++)
       {
           fact=fact*i;
       }
       sum=sum+fact;
       n=n/10;
    }
    if(temp==sum)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }
    return 0;
}