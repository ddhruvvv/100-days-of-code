#include<stdio.h>
int main()
{
    int percentage;
    int grade;
    printf("enter your percentage");
    scanf("%d",&percentage);
    if (percentage>=85)
    {
        printf("your grade is O");
    }
    else if (percentage>=75)
    { 
        printf("your grade is A");
    }
    else if (percentage>=60)
    {
        printf("your grade is B");
    }
    else if (percentage>=40)
    {
         printf("your grade is c");
    }
    else if (percentage>=33)
    {
        printf("your grade is D");
    }
    else {
        printf("your are fail");
    }
    return 0;
}