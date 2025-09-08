#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter A and B");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swap : %d %d", a, b);


    return 0;
}