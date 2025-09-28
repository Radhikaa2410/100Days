//Find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int r,c;
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
            printf("%d ", arr[j][i]);  
        }
        printf("\n");
    }
    return 0;
}