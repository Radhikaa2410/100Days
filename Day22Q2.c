//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n,sum=1,div,i;
    printf("Enter value ");
    scanf("%d",&n);
    for(i=3;i<=n;i++);
    {
       div=(float)(i/i+1);
       sum=sum+div;
    }
    printf("Sum of the series is: %.2f",sum);
    return 0;
}