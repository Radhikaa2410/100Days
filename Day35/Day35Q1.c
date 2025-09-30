//Find the second largest element in an array.
#include <stdio.h>
int main()
{
    int n;
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

    int lar=arr[n-1];
    int sec=0;

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=lar)
        {
            sec=arr[i];
            break;
        }
    }

    printf("The second largest element in the array is %d \n",sec);
    return 0;
}