/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the 
numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no 
elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. 
If no such index exists, print -1.*/

#include <stdio.h>
int main() 
{
    int n, i, j, lsum, rsum, pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) 
    {
        lsum = 0; // sum of elements to the left
        rsum = 0; // sum of elements to the right

        for(j = 0; j < i; j++)
            lsum += arr[j];

        for(j = i + 1; j < n; j++)
            rsum += arr[j];

        if(lsum == rsum) 
        {
            pivot = i;   
            break;      
        }
    }

    printf("Pivot index: %d\n", pivot);
    return 0;
}
