#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x1,x2,d;
    printf("Enter the values of a b c\n");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;

    if(d > 0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and unequal\n");
        printf("x1 = %f and x2 = %f", x1, x2);
    }
    else if(d == 0){
        x1 = -b/(2*a);
        printf("Roots are real and equal\n");
        printf("x1 = x2 = %f", x1);
    }
    else{
        printf("Roots are imaginary\n");
    }
    return 0;

}