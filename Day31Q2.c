#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);

    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    int a=0,b=n-1,temp;
    for(int i=0;i<n/2;i++) //till middle
    {
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp; //swapping using the third variable
        a++;
        b--;
    }
    printf("Reversed array: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    return 0;
}