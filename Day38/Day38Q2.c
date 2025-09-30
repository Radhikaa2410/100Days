//Check if a matrix is symmetric.
#include <stdio.h>
int main()
{
    int r,c,k=0;
    printf("Enter size of row and column respectively: \n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    if(r==c)
    {
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
                if(arr[i][j]!=arr[j][i]) 
                {
                    k++;
                    break;
                }
            } 
        }
        if(k==0)
        {
            printf("Matricx is symmetric.\n");
        }
        else
        {
            printf("Matricx is not symmetric.\n");
        }
    }
    else
    {
        printf("Matrix is not valid to be checked for symmetry");
    }
    return 0;
}
