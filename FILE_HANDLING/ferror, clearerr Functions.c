| Function             | Purpose                                                         | Returns                                     |
| -------------------- | --------------------------------------------------------------- | ------------------------------------------- |
| `ferror(FILE *fp)`   | Checks if a **read or write error** occurred on the stream `fp` | Non-zero if error occurred, `0` if no error |
| `clearerr(FILE *fp)` | **Resets** both the error and EOF indicators for the stream     | Returns nothing (`void`)                    |


#include <stdio.h>

int main() {
    FILE *fp;
    int status;
    char data[50] = "Hello Learner";

    // 1. Open file in read mode (causes error when writing)
    fp = fopen("rahul.txt", "r");

    if (fp != NULL) {
        fprintf(fp, "%s", data); // write attempt — invalid for "r"

        // 2. Check if any error occurred
        status = ferror(fp);
        printf("Error status before clear: %d\n", status);

        // 3. Clear the error
        clearerr(fp);

        // 4. Check again
        status = ferror(fp);
        printf("Error status after clear: %d\n", status);

        if (status == 0)
            puts("No read or write errors.");
        else
            puts("Read or write error has occurred.");

        fclose(fp);
    } else {
        printf("Unable to open file\n");
    }

    return 0;
}
