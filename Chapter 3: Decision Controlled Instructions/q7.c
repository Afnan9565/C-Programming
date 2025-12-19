// Given a point (x,y), write a program to find out if it lies on X-axis, Y-axis or origin
#include <stdio.h>
int main(){;
    int x,y;
    printf("Enter the value of (x, y): ");
    scanf("%d %d", &x ,&y);
    if(x == 0) printf("Y-Axis");
    if(y == 0) printf("X-Axis");
    if(x == 0 && y == 0) printf("Origin");
    return 0;
}