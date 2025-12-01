/*Open an existing file in append mode and allow the user to enter a new line of text.
 Append the text at the end without overwriting existing content.*/
 #include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256];

    fp = fopen("info.txt", "a");   // Open in append mode
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    fgets(buffer, sizeof(buffer), stdin);   // Take user input

    fputs(buffer, fp);   // Append to the file

    fclose(fp);
    printf("Line appended successfully.\n");

    return 0;
}
