#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {
        enum Gender gender;
    };

    char input[10];
    scanf("%s", input);

    struct Person p;
    if(strcmp(input, "MALE") == 0) p.gender = MALE;
    else if(strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else {
        printf("Invalid gender\n");
        return 1;
    }

    switch(p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
    }

    return 0;
}
