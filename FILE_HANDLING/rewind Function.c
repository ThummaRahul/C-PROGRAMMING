#include <stdio.h>

int main() {
    FILE *fp = fopen("rahul.txt", "r");
    int ch;

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // First read
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    rewind(fp);
    printf("\n");

    // Second read
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
