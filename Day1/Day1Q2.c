//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() 
{
   int a,b,sum,sub,pro,div;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   sum=a+b;
   if(a>b)
   {
     sub=a-b;
   }
   else
   {
    sub=b-a;
   }
   pro=a*b;
   if(a>b&&b!=0)
   {
      div=a/b;
   }
   else if(b>a&&a!=0)
   {
      div=b/a;
   }
   else
   {
      printf("Division from zero is not possible");
   }
   printf("addition:%d\n",sum);
   printf("subtraction:%d\n",sub);
   printf("multiplication:%d\n",pro);
   printf("division:%d\n",div);
   return 0;
}
