//Replace spaces with hyphens in a string.
#include <stdio.h>
int main()
{
char str[100];
    int c=0;
    printf("Enter string: ");
    scanf("%[^\n]", str); //reads string including spaces until newline
    while(str[c]!='\0')
    {
        if(str[c]==' ')
        {
            str[c]='-';
        }
        c++;
    }
    printf("Altered String: %s",str);
    return 0;
}