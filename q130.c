#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[100];
    int roll, marks;

    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while(fscanf(fp, "%s %d %d", name,
