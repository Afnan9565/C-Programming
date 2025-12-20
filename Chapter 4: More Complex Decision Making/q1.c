// Lengths of three sidesof a triangle are entered thorugh keyboard.
// Write a program to check whether the traingle is isocles, scalene or equilateral

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && a == c){
        printf("Equilateral\n");
    }else if(a == b || a == c || b == c){
        printf("Isoceles\n");
    }else{
        printf("Scalene");
    }
    return 0;
}