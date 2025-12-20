// The BMI is defined as the ratio of the weight of a person in kg to the square of height in m.
// Write a program that recieves height and weight, calculates the BMI and comment on it.
#include <stdio.h>
#include <math.h>
int main(){
    float h,w;
    scanf("%f %f", &h, &w);
    float bmi = w / pow(h, 2);
    if(bmi < 15.0){
        printf("Starvation\n");
    }else if (bmi < 17.6){
        printf("Anorexic\n");
    }else if (bmi < 18.6){
        printf("Underweight\n");
    }else if (bmi < 25.0){
        printf("Ideal\n");
    }else if (bmi < 30.0){
        printf("Overweight\n");
    }else if (bmi < 40.0){
        printf("Obese\n");
    }else{
        printf("Morbidly Obese\n");
    }
    return 0;
}