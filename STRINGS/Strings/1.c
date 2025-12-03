#include <stdio.h>
#include <string.h>

int is_vowel(char ch) {
    if(ch >= 'A' && ch <= 'Z'ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? ch + 32 : ch; // convert to lowercase for easy checking
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];   // Larger buffer for input
    char res[100];   // Result buffer
    int i = 0, j = 0;

    // For testing, you can uncomment the input part:
    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove trailing newline if any

    // Hardcoded input for example:
    //strcpy(str, "ind has bEen developing");

    while (str[i] != '\0') {
        // Check if current and next characters are vowels (case insensitive)
        if (is_vowel(str[i]) && is_vowel(str[i + 1])) {
            // Replace the pair with '**'
            res[j++] = '*';
            res[j++] = '*';
            i += 2;  // Skip both vowels
        } else {
            res[j++] = str[i++];
        }
    }

    res[j] = '\0';  // null terminate the output string

    printf("%s\n", res);

    // If no pair replaced, print the message:
    if (strcmp(str, res) == 0) {
        printf("there is no pair of vowels to hide\n");
    }

    return 0;
}

