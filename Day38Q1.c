//Add two matrices.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter size of row and column of both matrices respectively: \n");
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    int arr2[a][b];
    int add[a][b];
    printf("Enter %d elements for first matrix:\n",(a*b));
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter %d elements for second matrix:\n",(a*b));
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
    return 0;
}