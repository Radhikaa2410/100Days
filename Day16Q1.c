//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int num, bin=0, base=1, rem;
    printf("Enter a number ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        rem=temp%2;
        bin=(rem*base)+bin;
        base=base*10;
        temp=temp/2;
    }
    printf("Binary of %d is: %d",num,bin);
    return 0;
}
