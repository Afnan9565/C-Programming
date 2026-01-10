// Write a program to print all the ASCII values and their equivalent characters using a while loop.
// The ASCII values vary from 0 to 255
#include <stdio.h>
int main(){
    int ascii = 0;
    while (ascii <= 255)    
    {
        char character = ascii;
        printf("ASCII Value: %d Character: %c\n", ascii, character);
        ascii++;
    }
    
    return 0;
}