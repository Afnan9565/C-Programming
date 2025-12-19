// Given three points (x1, y1),(x2,y2),(x3,y3), write a program to check if all three points lies on a straight line
#include <stdio.h>
int main(){;
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the value of (x1, y1): ");
    scanf("%d %d", &x1 ,&y1);
    printf("Enter the value of (x1, y1): ");
    scanf("%d %d", &x1 ,&y1);
    printf("Enter the value of (x1, y1): ");
    scanf("%d %d", &x1 ,&y1);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);
    if(m1 == m2){
        printf("Lies on straight line");
    }
    else{
        printf("Doesn't lies on straight line");
    }
    return 0;
}
