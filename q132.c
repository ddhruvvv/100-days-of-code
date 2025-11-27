#include <stdio.h>
#include <string.h>

int main() {
    enum Traffic {RED, YELLOW, GREEN};
    char input[10];
    scanf("%s", input);

    enum Traffic t;
    if(strcmp(input, "RED") == 0) t = RED;
    else if(strcmp(input, "YELLOW") == 0) t = YELLOW;
    else if(strcmp(input, "GREEN") == 0) t = GREEN;
    else {
        printf("Invalid input\n");
        return 1;
    }

    switch(t) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }

    return 0;
}
