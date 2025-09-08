#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the length of three sides of triangle");
 scanf("%d %d %d",&a,&b,&c);

 if(a == b && b == c){
    printf("the triangle is equilateral");
 }
 else if (a == b || b == c || c == a) {
    printf("the triangle is isosceles");
 }
 else {
    printf("the triangle is scalen");
 }

 return 0;


}