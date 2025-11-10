/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each 
subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results 
separated by spaces as output.*/

#include <stdio.h>

int main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    if (k>n||k<=0) 
    {
        printf("Invalid k\n");
        return 0;
    }

    printf("First negative in each window: ");
    for (int i = 0; i <= n - k; i++) 
    {
        int found = 0;  // to check if we found any negative number
        for (int j = i; j < i + k; j++) 
        {
            if (a[j] < 0) {
                printf("%d ", a[j]);
                found = 1;
                break;  // stop after finding the first negative
            }
        }
        if (!found)
            printf("0 ");
    }

    return 0;
}

