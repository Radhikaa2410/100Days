//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], w[100], lw[100]; // w = word, lw = longest word
    int i=0,j=0,max=0,len;
    char ch;
    printf("Enter a sentence and end it with a space: ");
    scanf("%[^\n]", str1);
    getchar();
    for (i = 0;str1[i]!='\0';i++) 
    {
        if (str1[i]!=' ') 
        {
            w[j++] = str1[i];
        } 
        else 
        {
            w[j] = '\0';
            len = strlen(w);
            if (len > max) 
            {
                max = len;
                strcpy(lw, w); //word copied to longest word
            }
            j = 0;
        }
    }
    printf("Longest word: %s\n", lw);
    return 0;
}