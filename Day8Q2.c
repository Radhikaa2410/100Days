//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest\n",a);
        }
        else
        {
            printf("%d is the greatest\n",c);
        }
    }
    else
    {
       if(b>c) 
       {
        printf("%d is the greatest\n",b);
       }
       else
       {
        printf("%d is the greatest\n",c);
       }
    }
    return 0;
}