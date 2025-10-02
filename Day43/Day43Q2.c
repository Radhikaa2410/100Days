//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c;

    printf("Enter string:");
    scanf("%s",str); //only a word

    int l=strlen(str);
     for(int i=0; i < l/2; i++) //all the comparisons would be made till the middle length is reached
      {
        if(str[i] != str[l - i - 1]) //str[i]!=str[l-0-1], checks first and last; then second and second last and so on
        {
            c = 0;  // Not a palindrome
            break;
        }
    }
    if(c==0) //c=0=false
    {
        printf("Not a palindrome string");
    }
    else
    {
        printf("Palindrome string");
    }
    return 0;
}