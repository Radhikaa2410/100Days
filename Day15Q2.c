//Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n, num;
    int rev=0;
    printf("Enter value\n");
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        rev=(rev*10)+num;
        n=n/10;
    }
    printf("Reversed number=%d",rev);
    return 0;
}