//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    int l1=0,l2=0;
    printf("Enter first word: ");
    scanf("%[^\n]", str1);
    l1=strlen(str1);
    getchar();
    printf("Enter second word: ");
    scanf("%[^\n]", str2);
    l2=strlen(str2);
    
    for (int i=0;i<l1-1;i++) 
    {
        for (int j=0;j<l1-i-1;j++) 
        {
            if (str1[j]>str1[j+1]) 
            {
                int temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }

    for (int i=0;i<l2-1;i++) 
    {
        for (int j=0;j<l2-i-1;j++) 
        {
            if (str2[j]>str2[j+1]) 
            {
                int temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;
            }
        }
    }
    if(strcmp(str1,str2)==0)
    {
        printf("The given words are anagrams");
    }
    else
    {
        printf("The given words are not anagrams");
    }
    return 0;
}