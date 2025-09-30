//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,c,num,hcf,lcm;
    printf("Enter the numbers to calculate their LCM");
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
    lcm=(a*b)/hcf;
    printf("LCM=%d",lcm);
}