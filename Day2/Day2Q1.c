//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
   int l,b, ar, pr;
   printf("Enter length and breadth of rectangle respectively");
   scanf("%d%d",&l,&b);
   ar=l*b;
   pr=2*(l+b);
   printf("Area=%d  Perimeter=%d",ar,pr);
   return 0;
}