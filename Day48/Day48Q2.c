//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
// Function to reverse characters between indices start and end
void reverse(char str[], int start, int end) 
{
    char temp;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char str[200];
    int i = 0;
    printf("Enter a sentence ending with a space: ");
    // Read input including spaces until newline
    while ((str[i] = getchar()) != '\n') 
    {
        i++;
    }
    str[i] = '\0';  
    int start = 0;
    for (int j = 0; str[j] != '\0'; j++) 
    {
        // When we hit space, reverse the word before it
        if (str[j] == ' ') 
        {
            reverse(str, start, j - 1);
            start = j + 1;
        }
    }
    printf("Reversed words: %s\n", str);
    return 0;
}