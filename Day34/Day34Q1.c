//Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int n,num,pos;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n+1];

    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos<1||pos>n+1) 
    {
        printf("Invalid position\n");
    } 
    else 
    {
        for (int i=n;i>=pos;i--) 
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
    }
    printf("Array after insertion:\n");
    for (int i=0;i<n+1;i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}