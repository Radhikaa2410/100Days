/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that
appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. 
Note: Majority Element is not necessarily the element that is present most number of times.*/
#include <stdio.h>

int main() 
{
    int n, i, j, temp, count, maj = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    count = 1;
    for(i = 0; i < n - 1; i++) 
    {
        if(a[i] == a[i + 1]) 
        {
            count++;
            if(count > n / 2) 
            {
                maj = a[i];
                break;
            }
        } else {
            count = 1; 
        }
    }

    if(maj == -1)
        printf("No majority element found (-1)\n");
    else
        printf("Majority element: %d\n", maj);

    return 0;
}
