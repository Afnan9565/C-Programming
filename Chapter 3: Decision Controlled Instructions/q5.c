// Write a program to find whether the area of rectangle is greater than its perimeter
#include <stdio.h>
int main(){
    int l = 5, b =4;
    int area = l * b;
    int perimeter = 2*(l+b);
    if(area > perimeter){
        printf("Area");
    }else{
        printf("Perimeter");
    }

    return 0;
}