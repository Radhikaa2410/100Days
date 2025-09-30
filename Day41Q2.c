//Print each character of a string on a new line.
#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    printf("Enter string: "); //A single word without any space 
    scanf("%s", str); 
    while(str[c]!='\0')
    {
       printf("%c\n",str[c]);
       c++;
    }
    return 0;
}