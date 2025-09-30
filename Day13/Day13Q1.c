//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int n;
    int a,b,sum,sub,pro,div,mod;
    printf("MENU:1)ADD 2)SUBTRACT 3)DIVIDE 4)MULITPLY 5)REMAINDER\n");
    printf("Enter choice to perform the operation\n");
    scanf("%d",&n);
    printf("Enter numbers to peform action\n");
    scanf("%d%d",&a,&b);
    switch(n)
    {
        case 1:
        sum=a+b;
        printf("addition:%d\n",sum);
        break;
        case 2:
        if(a>b)
        {
           sub=a-b;
        }
        else
        {
           int sub=b-a;
        }
        printf("subtraction:%d\n",sub);
        break;
        case 3:
        if(a>b&&b!=0)
        {
          div=a/b;
        }
        else if(b>a&&a!=0)
        {
          div=b/a;
        }
        else
        {
           printf("Division from zero is not possible");
        }
        printf("division:%d\n",div);
        break;
        case 4:
        pro=a*b;
        break;
        printf("multiplication:%d\n",pro);
        case 5:
        if(a>b&&b!=0)
        {
          mod=a%b;
        }
        else if(b>a&&a!=0)
        {
          mod=b%a;
        }
        else
        {
           printf("Division from zero is not possible");
        }
        printf("remainder:%d\n",mod);
        default:
        printf("Invalid choice");
    }
    return 0;
}