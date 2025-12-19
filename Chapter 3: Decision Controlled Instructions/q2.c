// If ages of Ram, Shyam and Ajay are input through the keyboard. 
// Write a program to determine the youngest of the three
// Hint: Using Nested Loops
#include <stdio.h>
int main(){
    int ram, shyam, ajay;
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if(ram < shyam){
        if(ram < ajay){
            printf("Ram");
        }
        else{
            printf("Shyam");
        }
    }else{
        if(shyam < ajay){
            printf("Shyam");
        }else{
            printf("Ajay");
        }
    }

    return 0;
}