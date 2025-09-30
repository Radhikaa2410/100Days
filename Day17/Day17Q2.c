//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int c=0;
    int n;
    printf("Enter value\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
    return 0;
}
