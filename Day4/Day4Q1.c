//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers\n");
    scanf("%d%d",&a,&b);
    printf("Values before swapping: \n");
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Values after swapping: \n");
    printf("a=%d b=%d",a,b);
    return 0;
}