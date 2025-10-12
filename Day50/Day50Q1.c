//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() 
{
    int d, m, y;
    char mon[10];

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    switch(m) {
        case 1:  strcpy(mon, "Jan"); break;
        case 2:  strcpy(mon, "Feb"); break;
        case 3:  strcpy(mon, "Mar"); break;
        case 4:  strcpy(mon, "Apr"); break;
        case 5:  strcpy(mon, "May"); break;
        case 6:  strcpy(mon, "Jun"); break;
        case 7:  strcpy(mon, "Jul"); break;
        case 8:  strcpy(mon, "Aug"); break;
        case 9:  strcpy(mon, "Sep"); break;
        case 10: strcpy(mon, "Oct"); break;
        case 11: strcpy(mon, "Nov"); break;
        case 12: strcpy(mon, "Dec"); break;
        default: strcpy(mon, "Invalid"); break;
    }

    if(m >= 1 && m <= 12)
        printf("New date: %02d-%s-%04d\n", d, mon, y);
    else
        printf("Invalid month.\n");

    return 0;
}