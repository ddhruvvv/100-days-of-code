#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c;
    double d, root1, root2;
    printf("enter your quadratic equation");
    scanf("%d %d %d",&a,&b,&c);
     
    d = (b * b) - 4 * a * c;
    
    if (d > 0){
        root1 = (- b + sqrt(d))/2 * a;
        root2 = (- b + sqrt(d))/2 * a;
        printf("both roots are real and different i.e %lf %lf",root1,root2);
    }
    else if (d == 0) {
        root1 = (-b)/2 * a;
        root1 = root2;
        printf("both roots are real and same i.e %lf",root1); 
    }
    else {
        printf("the roots are imaginary");
    }

    return 0;
}