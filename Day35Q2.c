//Rotate an array to the right by k positions.
#include <stdio.h>
int main()
{
    int n,num;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter %d elements \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 

    printf("Enter value to shift by: \n");
    scanf("%d",&num);

     for (int j=0;j<num;j++) 
     {
        // Move last element to the front by swapping backwards
        for (int i=n-1;i>0;i--) 
        {
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1]=temp;
        }
    }

    printf("Array after rotation:\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;

}