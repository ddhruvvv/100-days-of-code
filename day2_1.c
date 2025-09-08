#include<stdio.h>
int main()
{
    int length,width;
    printf("enter length of rectangle");
    scanf("%d", &length);
    printf("enter width of rectangle");
    scanf("%d", &width);
    int area = length*width;
    printf("area of rectangle is %d",area);
    int parameter = (length + width)*2;
    printf("parameter of rectangle is %d",parameter);

    return 0;
}