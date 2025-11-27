#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    char ch;

    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            char lower = tolower(ch);
            if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}
