#include<stdio.h>
int main()
{
    int n;
    int i;
    int product = 1;
    printf("enter a number");
    scanf("%d",&n);

    for(i = 1;i <= n;i++) {
        product = product * i;
    }
    printf("the factorial of this number is %d",product);
    return 0;

}