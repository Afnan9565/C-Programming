// Write a program to find the absolute value of a number entered through a keyboard.
#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num < 0){
        num = -num;
    }
    printf("%d\n", num);
    return 0;
}