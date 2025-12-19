// Paper of A0 size has dimensions 1189 mm X 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
// Thus the paper of A1 size would have dimensions 841 x 594 mm.
// Write a program to calculate and print paper sizes of A0, A1, ... A8

#include <stdio.h>
int main(){

    int length = 1189, width = 843;
    for(int i =0; i <= 8; i++){
        int temp;
        temp = width;
        width = length / 2;
        length = temp;
        printf("The size of A%d paper is: %d mm x %d mm \n",i,length,width);
    }
    return 0;
}