//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
/*int main()
{
    int n, digit, comp = 0, place = 1;
    printf("Enter binary number");
    scanf("%d", &n);

    while (n > 0) 
    {
        digit = n % 10;       
        if (digit == 0)
        {
            comp = comp + (1* place); 
        }
        else if (digit == 1)
        {
            comp = comp + (0* place); 
        } 
        else 
        {
            printf("Invalid binary number\n");
            return 0;         
        }
        n = n / 10;    
        place = place * 10;   
    }

    printf("1's Complement = %d\n", comp);
    return 0;
}*/
int main() 
{
    char binary[100];   
    int i;

    printf("Enter binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++) //At the end of every string, there is a null character '\0' (ASCII value 0) that marks the end.
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
        else 
        {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    printf("1's Complement = %s\n", binary);
    return 0;
}