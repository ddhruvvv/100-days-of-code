#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("enter a number");
    scanf("%d",&n);

    for(i = 1;i <= n;i++) {
        printf("%d\t",i);
    }
    return 0;
    
}