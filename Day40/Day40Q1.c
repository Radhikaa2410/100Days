#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter %d elements:\n", n * n);
    for(int i = 0; i<n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Zig-Zag Diagonal Traversal:\n");

    // Loop over all diagonals (i+j = d)
    for(int d = 0; d <= 2*(n-1); d++) 
    {
        if(d%2==0) 
        {
            // even diagonal → print bottom-up (i=n-1 to 0)
            for(int i = n-1; i >= 0; i--) 
            {
                int j = d - i;
                if(j >= 0 && j < n) 
                {
                    printf("%d ", a[i][j]);
                }
            }
        } 
        else 
        {
            // odd diagonal → print top-down (i=0 to n-1)
            for(int i = 0; i < n; i++)
            {
                int j = d - i;
                if(j >= 0 && j < n) {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    printf("\n");
    return 0;
}