//Remove all vowels from a string.
#include <stdio.h>
int main()
{
    char str[100];
    char res[100];
    int c=0;
    int i=0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    while(str[c]!='\0')
    {
        switch(str[c]) 
        {
           case 'a': case 'e': case 'i': case 'o': case 'u':
           case 'A': case 'E': case 'I': case 'O': case 'U':
           break;
           default:
           res[i]=str[c];
           i++;
        }
           c++;
    }
    res[i] = '\0';
    printf("String after removing vowels: %s", res);
    return 0;
}
