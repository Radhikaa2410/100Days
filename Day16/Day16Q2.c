//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int n, num, temp;
    int rev=0;
    printf("Enter value\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        num=n%10;
        rev=(rev*10)+num;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}