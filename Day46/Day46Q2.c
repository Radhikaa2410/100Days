//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    printf("Enter string: ");
    scanf("%s", str); //reads a word
    while(str[c]!='\0')
    {
        if(str[c]>=65 && str[c]<=90)
        {
            str[c]+=32;
        }
        c++;
    }
    char ch = '\0';  // to store the repeating character
    int found = 0;
    // Find first repeating character
    for (int i=0;i<c;i++)
    {
        for (int j=i+1;j<c;j++)
        {
            if (str[i]==str[j])
            {
                ch=str[i];
                found=1;
                break;   //break inner loop
            }
        }
        if (found) //if found, break outer loop too
        {       
            break;
        }
    }

    if (found)
    {
        printf("First repeating character: %c\n", ch);
    }
    else
    {
        printf("No repeating character found\n");
    }

    return 0;
}