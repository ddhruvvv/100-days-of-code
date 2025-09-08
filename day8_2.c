#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
    
    if (a > b && a > c) {
        printf("the largest among these number is %d",a);
    }
    else if (b > a && b > c) {
        printf("the largest among these number is %d",b);
    }
    else if (c > a && c > b) {
        printf("the largest among these number is %d",c);
    }
    else {
        printf("its a tie");
    }

    return 0;

} 