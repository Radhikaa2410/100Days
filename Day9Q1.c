//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>  

int main() 
{
    float a, b, c, dis, r1, r2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) 
    {
        printf("Not a quadratic equation (a cannot be 0).\n");
        return 0;
    }
    dis = (b * b) - (4 * a * c);
    if (dis > 0) 
    {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", r1, r2);
    }
    else if (dis== 0) 
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", r1);
    }
    else 
    {
        real = -b / (2 * a);
        imag = sqrt(-dis) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }
    return 0;
}