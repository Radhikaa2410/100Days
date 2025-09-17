//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() 
{
   float r;
   printf("Enter radius:\n");
   scanf("%f",&r);
   float ar=3.14*r*r;
   float cr=2*3.14*r;
   printf("area=%f\n",ar);
   printf("circumference=%f\n",cr);
   return 0;
}