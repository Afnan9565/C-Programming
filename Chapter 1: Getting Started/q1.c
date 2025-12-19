#include <stdio.h>
int main(){

    // Temp of a city in faranheit degrees is input through the keyboard. Write a program to convert this temp into centigrade degrees
    int temp;
    scanf("%d", &temp);
    float celcius = (temp - 32) * 5.0 / 9.0;
    printf("%f", celcius);
    return 0;
}