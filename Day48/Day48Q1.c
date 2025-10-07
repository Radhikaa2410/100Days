//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
// Function to check if str2 is rotation of str1
int isRotation(char str1[], char str2[]) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) // If lengths are not equal, they can't be rotations
    {
        return 0;
    }
    // Create a new string to store str1 + str1 so we'll get the original string twice
    char temp[200];  // Make sure this is large enough
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2)) 
    {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    } 
    else 
    {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    }
    return 0;
}