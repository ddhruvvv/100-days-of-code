#include <stdio.h>
#include <math.h>
int main()
{
    float principle,rate,time;
    printf("enter your principle amount\n");
    scanf("%f",&principle);
    printf("enter rate of interest\n");
    scanf("%f",&rate);
    printf("enter time period\n");
    scanf("%f",&time);
    float si = (principle*rate*time)/100;
    printf("your si is %f\n",si);
    double a = principle * pow(1 + rate/100,time);
    double ci = a - principle;
    printf("your ci is %lf\n",ci);
    
    return 0;
}