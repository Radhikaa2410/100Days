//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>

int main() 
{
    char n[100];
    printf("Enter full name: ");
    scanf(" %[^\n]", n);
    int i = 0;
    if(n[0] != ' ')
    {
        printf("%c.", toupper(n[0]));
    }
    while(n[i] != '\0') 
    {
        if(n[i] == ' ' && n[i+1] != ' ' && n[i+1] != '\0') 
        {
            int j = i+1, more = 0;
            while(n[j] != '\0') 
            {
                if(n[j] == ' ') 
                { more = 1; break; }
                j++;
            }

            if(more)
                printf("%c.", toupper(n[i+1]));
            else {
                printf(" ");
                while(n[i+1] != '\0') 
                {
                    i++;
                    printf("%c", n[i]);
                }
                break;
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}