#include<stdio.h>
int main()
{
    int unit;
    int bill;
    printf("enter the units consumed");
    scanf("%d",&unit);

    if(unit <= 100) {
        bill = 5 * unit;
        printf("your bill is %d",unit);
    } else if(unit > 100 && unit <= 200) {
        bill = (7 * unit) + 500;
        printf("your bill is %d",bill);
    }
    else if(unit > 200 && unit <= 300) {
        bill = (10 * unit) + 1200;
        printf("your bill is %d",bill);
    }
    else {
        bill = (12 * unit) + 2200;
        printf("your bill is %d",bill);
    }
    return 0;
}