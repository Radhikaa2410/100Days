//Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int n,res=-1;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter %d elements \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 

    for (int i=0;i<n-1;i++) 
    {
        for (int j=0;j<n-i-1;j++) 
        {
            if (arr[j]>arr[j+1]) 
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int num;
    printf("Enter value to search: \n");
    scanf("%d",&num);
    
    int high=n-1;
    int low=0;
    int mid;
   
    while(low<=high)
    {
       mid=(high+low)/2;
       if(arr[mid]==num)
       {
           res=mid;
           break;
       }
       else if(arr[mid]<num)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
    }
    if (res!=-1)
    {
        printf("Element found at index %d\n", res);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}