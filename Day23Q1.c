//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int n,i,j=3;
    float sum=0.0, div;
    printf("Enter value ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
      div=(float)i/j;
      sum=sum+div;
      j=j+4;
    }
    printf("Sum of the series is: %.2f",sum);
    return 0;
}