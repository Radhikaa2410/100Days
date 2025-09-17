//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int c=0,powTen,first,middle,new,last;
    printf("Enter number ");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
      c=c++;
      n=n/10;  //3789
    }
    last=n%10; //9
    powTen = pow(10, c-1); // 10^(digits-1) (10,3)=1000

    first = n / powTen;   // extract first digit, 3

    middle = n % powTen;  //remmove first digit, 789
    middle = middle / 10;   // remove last digit, 789/10=78

    // construct new number: last + middle + first
    new = last * powTen + middle * 10 + first; //9*1000+78*10+3=9783

    printf("Number after swapping first and last digit: %d\n", new);
    return 0;
}