// Write a program to recieve an integer and find its ocatal equivalent
#include <stdio.h>
#include <math.h>

int main() {
    int dec, remainder;
    int octal = 0;
    int position = 0;

    printf("Enter the decimal input: ");
    scanf("%d", &dec);

    while (dec != 0) {
        remainder = dec % 8;
        octal = octal + remainder * pow(10, position);
        dec = dec / 8;
        position++;
    }

    printf("Octal equivalent: %d\n", octal);
    return 0;
}
