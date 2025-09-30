//Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int n,c=0,d=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value number %d ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("Count of even numbers: %d\n",c);
    printf("Count of even numbers: %d\n",d);
    return 0;
}