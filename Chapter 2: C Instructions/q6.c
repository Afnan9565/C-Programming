// Two numbers are input through the keyboard into two locations C and D.
// Write a program to interchange the contents of C and D.
#include <stdio.h>

int main(){
    int c,d;
    scanf("%d %d", &c,&d);
    // printf("%d %d",c,d);
    int temp = c;
    c = d;
    d = temp;
    printf("%d %d",c,d);
}