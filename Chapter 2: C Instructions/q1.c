// If a five-digit number is input through the keyboard. Write a program to calculate the sum of its digits.
// Hint: Use Modulus Operator

#include <stdio.h>
int main(){
    int sum = 0;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num > 0){
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    printf("The Sum of number is: %d\n", sum);
    return 0;
}