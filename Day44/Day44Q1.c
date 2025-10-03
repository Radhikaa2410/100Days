//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main()
{
char str[100];
    int c=0;
    int spec=0,sp=0,dig=0;
    printf("Enter string: ");
    scanf("%[^\n]", str); //reads string including spaces until newline
    while(str[c]!='\0')
    {
        if(str[c]==' ')
        {
            sp++;
        }
        else if(str[c]<='9' && str[c]>='0')
        {
            dig++;
        }
        else if((str[c]>='a' && str[c]<='z')||(str[c]>='A' && str[c]<='Z'))
        { }
        else
        {
            spec++;
        }
        c++;
    }
    printf("Digits: %d\n",dig);
    printf("Spaces: %d\n",sp);
    printf("Special Characters: %d\n",spec);
    return 0;
}