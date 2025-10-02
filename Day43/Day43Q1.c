//Reverse a string.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], rev[100];
    int i, l, c = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    l = strlen(str);

    int j=l-1;
    for (i = 0; i < l; i++) 
    {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';  // null terminate
    printf("Reversed String:%s",rev);
    return 0;
}