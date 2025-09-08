#include<stdio.h>
int main()
{
    int r;
    printf("enter radius of circle");
    scanf("%d",&r);
    int area = (22/7)*r*r;
    printf("area of circle is %d\n",area);
    int circumference = 2*22/7*r;
    printf("circumference of circle is %d\n",circumference);

    return 0;
}