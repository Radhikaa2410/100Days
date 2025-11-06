/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray 
of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output.*/

#include <stdio.h>

int main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) 
    {
        printf("Invalid k\n");
        return 0;
    }

    printf("Maximum of each subarray: ");
    for (int i = 0; i <= n - k; i++) 
    {
        int max = a[i];
        for (int j = i + 1; j < i + k; j++) 
        {
            if (a[j] > max)
                max = a[j];
        }
        printf("%d ", max);
    }

    return 0;
}