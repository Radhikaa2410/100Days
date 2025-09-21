//Merge two arrays.
#include <stdio.h>
int main()
{
    int n1;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("Enter value number %d ",i+1);
        scanf("%d",&arr1[i]);
    }

    int n2;
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("Enter value number %d ",i+1);
        scanf("%d",&arr2[i]);
    }

    int arr[n1+n2];
    int j=0;

    for(int k=0;k<n1;k++)
    {
        arr[j]=arr1[k];
        j++;
    }

    for(int k=0;k<n2;k++)
    {
        arr[j]=arr2[k];
        j++;
    }

    printf("Merged array:\n");
    for (int i=0;i<n1+n2;i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}