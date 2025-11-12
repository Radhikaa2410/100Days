//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the limit ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c == 2)
        {
            printf("%d\n",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}