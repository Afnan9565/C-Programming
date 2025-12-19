// Write a program to recieve Cartesian Co-ordinates (x,y) of a point and convert them into polar co-ordinates (r, thetha).
// Hint: r = sqrt(x^2+y^2) and Thetha = tan^-1(y/x)

#include <stdio.h>
#include <math.h>

int main(){

    float x,y;
    printf("Enter the Cartesian Co-Ordinates: ");
    scanf("%f %f", &x,&y);
    float r = sqrt(pow(x,2)+pow(y,2));
    float theta = atan2(y, x);
    printf("(%f,%f)", r,theta);
    return 0;
}