//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a,b,c,num,hcf;
    printf("Enter the numbers to calculate their HCF");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else if(b>a)
    {
        c=b;
    }
    else
    {
        c=a;
    }
    for(int i=c;i>1;i--)
    {
       if(a%i==0&&b%i==0)
       {
         hcf=i;
         break;
       }
    }
    printf("HCF is %d",hcf);
    return 0;
}