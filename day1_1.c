#include <stdio.h>
#question : Q1: Write a program to input two numbers and display their sum.
int main()
{
    int a,b;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    int c = a + b;
    printf("your sum is %d",c);

    return 0;

}
