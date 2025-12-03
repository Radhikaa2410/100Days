//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;

    FILE *fp;

    // ===== WRITE TO BINARY FILE =====
    fp = fopen("employee.dat", "wb");   // write binary
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        return 1;
    }

    // Input employee data
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Name: ");
    scanf("%s", e1.name);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    // Write structure to file
    fwrite(&e1, sizeof(struct Employee), 1, fp);

    fclose(fp);

    fp = fopen("employee.dat", "rb");   // read binary
    if (fp == NULL) 
    {
        printf("Cannot open file for reading.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);

    fclose(fp);

    // Print read data
    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
