//Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Which number do you want to find?\n");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Element found at position %d\n",(i+1));
            break;
        }
    }
    return 0;
}