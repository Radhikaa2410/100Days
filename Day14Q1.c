//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter value\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
            sum=sum+i;
    
    }
    printf("Sum:%d",sum);
    return 0;
}
