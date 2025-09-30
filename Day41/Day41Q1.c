//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    printf("Enter string: ");
    scanf("%[^\n]", str); //reads string including spaces until newline
    while(str[c]!='\0')
    {
        c++;
    }
    printf("Length of string is: %d\n ",c);
    return 0;
}
