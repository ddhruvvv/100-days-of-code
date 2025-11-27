#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("Name\tRoll\tMarks\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
