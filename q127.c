#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    if(input == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if(output == NULL) {
        printf("Error creating output file!\n");
        fclose(input);
        return 1;
    }

    char ch;
    while((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase and written to output.txt\n");
    return 0;
}
