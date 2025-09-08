#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    int c= a*b;
    printf("your product is %d\n",c);
    int d = a + b;
    printf("your sum is %d\n",d);
    int e = a - b;
    printf("your difference is %d\n",e);
    return 0;
}