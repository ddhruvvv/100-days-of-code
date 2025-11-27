#include <stdio.h>

int main() {
    char source[100], dest[100];
    printf("Enter Source File Name: ");
    scanf("%s", source);
    printf("Enter Destination File Name: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if(src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if(dst == NULL) {
        printf("Error creating destination file!\n");
        fclose(src);
        return 1;
    }

    char ch;
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s\n", dest);

    return 0;
}
