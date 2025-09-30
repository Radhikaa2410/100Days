//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the three sides of a triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3||s2+s3>s1||s1+s3>s2)
    {
        printf("Triangle is valid\n");
        if(s1==s2||s2==s3||s1==s3)
        {
             printf("isoceles Triangle\n");
        }
        else if((s1==s2)&&(s1==s3))
        {
            printf("Equilateral Triangle\n");
        }
        else
        {
           printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}