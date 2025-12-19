// Write a program to check whether a triangle is valid or not, if three angles are entered through the keyboard
#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180){
        printf("valid");
    }else{
        printf("Invalid");
    }
    return 0;
}