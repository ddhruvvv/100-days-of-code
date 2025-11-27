#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    if(str[n-1] == '\n') str[n-1] = '\0';

    int capitalize = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            if(capitalize) {
                str[i] = toupper(str[i]);
                capitalize = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        } else if(str[i] == ' ') {
            capitalize = 1;
        }
    }

    printf("%s", str);

    return 0;
}
