#include<stdio.h>
int main()
{
    int n;
    int i;
    int product=1;
    int counter = 0;

    printf("enter a number");
    scanf("%d",&n);

    for(i = 1;i <= n;i++) {
        if(i%2 == 0) {
            product = product * i;
           
        }
        }
    
    printf("product of first %d even number is %d",n,product);
    return 0;
}


   

