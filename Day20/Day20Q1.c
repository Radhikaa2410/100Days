//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n,d;
    int pro=1;
    printf("Enter value\n");
    scanf("%d",&n);
    while(n>0)
    {
      d=n%10;
      pro=pro*d;
      n=n/10;
    }
    printf("Product of digits=%d",pro);
    return 0;
}