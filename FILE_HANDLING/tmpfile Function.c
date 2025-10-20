#include <stdio.h>
#include <string.h>

int main() {
    FILE *temp_ptr;

    // Create a temporary file
    temp_ptr = tmpfile();   // creates a temporary file in memory or disk

    char data[] = "hello programmer";
    int length = strlen(data);
    int counter = -1;

    if (temp_ptr != NULL) {
        printf("Temp file created\n");

        // Write data
        while (++counter < length) {
            fputc(data[counter], temp_ptr);
        }

        // Reset file pointer to beginning
        rewind(temp_ptr);
        printf("\nFile content:\n");

        int ch;
        // Correct way to read till EOF
        while ((ch = fgetc(temp_ptr)) != EOF) {
            putchar(ch);
        }

        fclose(temp_ptr);
    } else {
        printf("Unable to create temp file\n");
    }

    return 0;
}
