//Delete an element from an array.
#include <stdio.h>
int main()
{
    int n,num,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &num);

    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
           arr[i]=0;
           break;
        }
    }

    for(;i<n-1;i++)
    {
       arr[i]=arr[i+1];
    }

    printf("Array after deletion:\n");
    for (int i=0;i<n-1;i++) 
    {
        printf("%d ", arr[i]);
    }
}