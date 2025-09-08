#include<stdio.h>
int main()
{
    char character;
    printf("enter a character");
    scanf("%c",&character);

    if(character >= 'A' && character <= 'Z') {
        printf("your character is an uppercase");
    }
    else if(character >= 'a' && character <= 'z') {
        printf("your character is a lower case");
    }
    else if(character >= 0 && character <= 9) {
        printf("your character is an digit");
    }
    else {
        printf("your character is a special character");
    }

    return 0;

}