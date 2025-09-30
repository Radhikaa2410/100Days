//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter %d elements:\n", n * n);
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Assumed that diagonals have distinct elements
    int m = 1;
    int s = 1;

    // Check main diagonal
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(a[i][i] == a[j][j]) 
            {
                m = 0; // Found duplicate
            }
        }
    }

    // Check secondary diagonal
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(a[i][n - 1 - i] == a[j][n - 1 - j]) 
            {
                s = 0; // Found duplicate
            }
        }
    }

    // Print results
    if(m == 1) 
    {
        printf("Main diagonal is distinct.\n");
    } 
    else 
    {
        printf("Main diagonal is NOT distinct.\n");
    }

    if(s == 1) 
    {
        printf("Secondary diagonal is distinct.\n");
    } 
    else 
    {
        printf("Secondary diagonal is NOT distinct.\n");
    }

    return 0;
}