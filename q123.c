#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    char c;
    int inWord = 0;

    while((c = fgetc(fp)) != EOF) {
        chars++;

        if(c == '\n') 
            lines++;

        if(isspace(c))
            inWord = 0;
        else if(inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    // To count the last line if file doesn't end with '\n'
    if(chars > 0 && c == EOF) 
        lines++;

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    fclose(fp);
    return 0;
}
