//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number to check \n ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
    return 0;
}