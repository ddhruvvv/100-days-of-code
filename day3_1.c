#include<stdio.h>
int main()
{
    int celcius,farhenite;
    printf("enter temperature in celcius");
    scanf("%d",&celcius);
    farhenite = (celcius*9/5)+32;
    printf("temperature in farhenite is %d\n",farhenite);

    return 0;

}