#include <stdio.h>

int main() {
    char name[L_tmpnam + 1];
    tmpnam(name);
    puts(name);

    FILE *fp = fopen(name, "w+"); // create the file
    if (fp != NULL) {
        fputs("Temporary data", fp);
        rewind(fp);

        int ch;
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);

        fclose(fp);
        remove(name); // delete after use
    }
}
