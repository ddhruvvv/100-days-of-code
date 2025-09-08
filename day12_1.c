#include<stdio.h>
int main()
{
    int late;
    int fine;
    printf("enter  number of days you got late");
    scanf("%d",&late);

    if(late <= 5) {
        fine = 2 * late;
        printf("your fine is %d",fine);
    } else if(late > 5 && late <= 10) {
        fine = (4 * late) + 10;
        printf("your fine is %d",fine);
    }
    else if(late > 10 && late <= 30) {
        fine = (6 * late) + 30;
        printf("your fine is %d",fine);
    }
    else {
        printf("MEMBERSHIP CANCELLED");
    }

    return 0;
}