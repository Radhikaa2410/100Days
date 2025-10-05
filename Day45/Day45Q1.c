//Count frequency of a given character in a string.
#include <stdio.h>
int main()
{
char str[100];
    int c=0,f=0;
    char ch;
    printf("Enter string:\n ");
    scanf("%[^\n]", str); //reads string including spaces until newline
    getchar(); // to consume the leftover '\n'
    printf("Enter the character you want to check frequency of:\n ");
    scanf("%c",&ch);
    while(str[c]!='\0')
    {
        if(str[c]==ch)
        {
            f++;
        }
        c++;
    }
    printf("The frequency of the given character is: %d",f);
    return 0;
}