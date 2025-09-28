//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
    int r,c,sum=0;
    printf("Enter size of row and column respectively: \n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int add[100];
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
        sum=0;
        for(int j=0;j<c;j++)
        {
           sum=sum+arr[i][j];
        }
        add[i]=sum;
        printf("Sum of row %d: %d",i+1,sum);
        printf("\n");
    }
    return 0;
}