//Find the sum of array elements.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value number %d ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum: %d",sum);
    return 0;
}