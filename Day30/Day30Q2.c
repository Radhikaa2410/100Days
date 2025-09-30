//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int n,a=0,b=0,c=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value number %d ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
           a++;
        }
        else if(arr[i]<0)
        {
           b++;
        }
        else
        {
           c++;
        }
    }
    printf("Positive elements: %d\n",a);
    printf("Negative elements: %d\n",b);
    printf("Zeroes: %d\n",c);
    return 0;
}