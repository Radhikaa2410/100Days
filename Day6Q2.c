//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else
#include <stdio.h>
int main()
{
    int num;
    printf("enter value");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Entered number is positive ");
    }
    else if(num<0)
    {
        printf("Entered number is negative ");
    }
    else
    {
            printf("Entered number is zero ");
    }
    return 0;
}