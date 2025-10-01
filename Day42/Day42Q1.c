//Count vowels and consonants in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    int i=0,j=0;
    printf("Enter string: ");
    scanf("%s", str); //reads a word
    while(str[c]!='\0')
    {
        switch(str[c]) 
        {
           case 'a':
           case 'e':
           case 'i':
           case 'o':
           case 'u':
           i++;
           break;
           default:
           j++;
        }
        c++;
    }
    printf("Vowels: %d\n",i);
    printf("Consonants: %d\n",j);
    return 0;
}