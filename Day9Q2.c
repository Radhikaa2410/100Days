/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
*/

#include <stdio.h>
int main()
{
    float p;
    printf("Enter percentage\n");
    scanf("%f",&p);
    if(p>=90.0&&p<=100.0)
    {
       printf("Grade A");
    }
    else if(p>=80.0&&p<90.0)
    {
        printf("Grade B");
    }
    else if(p>=70.0&&p<80.0)
    {
        printf("Grade c");
    }
    else if(p>=60.0&&p<70.0)
    {
        printf("Grade D");
    }
    else if(p>=0.0&&p<60)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}