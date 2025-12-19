// A five digit number is entered through the keyboard.
// Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
#include <stdio.h>
int main(){
    printf("Enter the number: ");
    int num;
    int placeValue = 10000;
    int rev = 0;
    scanf("%d", &num);
    int temp = num;
    while(temp > 0){
        int lastDigit = num % 10;
        rev = rev + lastDigit * placeValue;
        num /= 10;
        placeValue /= 10;
    }
    printf("%d\n", rev);
    if(num == rev){
        printf("Original Number and its reverse are same");
    }
    else{
        printf("Original Number and its reverse are not same");
    }
    return 0;
}