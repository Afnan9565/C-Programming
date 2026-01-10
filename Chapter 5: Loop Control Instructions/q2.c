// Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong Number
// For Example:- 153 = (1*1*1)+(5*5*5)+(3*3*3)
#include <stdio.h>
int main(){
    int number = 1;
    while (number <= 500)
    {
        int armstrong = 0;
        int temp = number;
        while (temp > 0)
        {
            int lastDigit = temp % 10;
            armstrong += lastDigit*lastDigit*lastDigit;
            temp /= 10;
        }
        if (armstrong == number)
        {
            printf("%d is an Armstrong number\n",number);
        }
        
        
        number++;
    }
    

    return 0;
}