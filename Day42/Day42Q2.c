//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    printf("Enter string: ");
    scanf("%s", str); //reads a word
    while(str[c]!='\0')
    {
        if (str[c]>=97 && str[c]<=122) 
        {
            str[c]-=32;
        }
        c++;
    }
    printf("Altered string:%s",str);
    return 0;
}