/*1: use checkalphabet function to count the alphabets
2.use calculatenumericchar function to count numeric char
......
istr[]="#hellohe2@@startcoding&&1234Byte*"
alphabets: only upper or lower ------->21
numeric char : ('0','1'..'9')-------->5
special : 6*/



#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100] = "#hellohe2@@startcoding&&1234Bytes*";
    int upper_count = 0;
    int lower_count = 0;
    int digit_count = 0;
    int special_count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(isupper(str[i])) {
            upper_count++;
        }
        else if(islower(str[i])) {
            lower_count++;
        }
        else if(isdigit(str[i])) {
            digit_count++;
        }
        else {
            special_count++;
        }
    }

    printf("Uppercase letters: %d\n", upper_count);
    printf("Lowercase letters: %d\n", lower_count);
    printf("Digits: %d\n", digit_count);
    printf("Special characters: %d\n", special_count);

    return 0;
}

