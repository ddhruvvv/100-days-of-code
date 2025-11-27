#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int num, count = 0;
    long sum = 0;

    while(fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0) {
        printf("No numbers in file.\n");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum = %ld\nAverage = %.2lf\n", sum, avg);

    return 0;
}
