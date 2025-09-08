#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    
    if (n%2 == 0) {
        printf("your number is even");
    }
    else {
        printf("your number is odd");
    }
    return 0;
}