/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 
and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists,
print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/

#include <stdio.h>
int main() 
{
    int n, x, sum1, sum2, i;
    int pivot = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) 
    {
        sum1 = 0;
        sum2 = 0;

        for(i = 1; i <= x; i++)
            sum1 += i;

        for(i=x;i<=n;i++)
            sum2 += i;

        if(sum1 == sum2) 
        {
            pivot = x;
            break;  
        }
    }

    printf("Pivot integer: %d\n", pivot);
    return 0;
}
