/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>

int main() {
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

    int max = 0;

    for (int i = 0; i <= n - k; i++) 
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += a[j];
        if (sum > max)
            max = sum;
    }

    printf("Max sum = %d\n", max);
    return 0;
}
