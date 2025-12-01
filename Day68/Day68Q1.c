/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
Print that missing number*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0, total = n*(n+1)/2;

    // input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // missing number is the one that doesn't contribute to the full sum
    int missing = total - sum;

    printf("%d\n", missing);

    return 0;
}
