//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() 
{
    int total, hrs, mins, secs;
    printf("Enter time in seconds: ");
    scanf("%d", &total);
    hrs = total / 3600;           
    mins = (total % 3600) / 60;  
    secs = total % 60;  
    printf("Time = %0d:%0d:%0d\n", hrs, mins, secs);
    return 0;
}