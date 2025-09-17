//aWrite a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers \n ");
    scanf("%d%d\n",&a,&b);
    printf("Values before swapping \n");
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("Values before swapping \n");
    printf("a=%d b=%d",a,b);
    return 0;
}