//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    int pro=1;
    printf("Enter value\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
            pro=pro*i;
    }
    printf("product:%d",pro);
    return 0;
}