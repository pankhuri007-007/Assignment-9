#include <stdio.h>

void analyzeString(char *str, int *vowels, int *consonants,
                   int *digits, int *spaces, int *special) {

    int i = 0;
    char ch;

    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (str[i] != '\0') {

        ch = str[i];

        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U') {
            (*vowels)++;
        }

        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {
            (*consonants)++;
        }

        else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        }

        else if (ch == ' ') {
            (*spaces)++;
        }

        else if (ch != '\n') {
            (*special)++;
        }

        i++;
    }
}

int main() {
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants,
                  &digits, &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}