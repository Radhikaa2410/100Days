//Find the sum of the elements of the principal diagonal of a matrix.
#include <stdio.h>
int main()
{
    int r,c,sum=0;
    printf("Enter size of row and column respectively: \n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter %d elements:\n",(r*c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j) 
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum of elements of the principal diagonal is: %d \n",sum);
    return 0;
}
