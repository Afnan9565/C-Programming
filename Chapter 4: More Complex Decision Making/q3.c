// A Certain Grade of Steel is graded according to the following conditions:
// (i) Hardness must be greater than 50
// (ii) Carbon Content must be less than 0.7
// (iii) Tensile strength must be greater than 5600
// Grade -> 10 : All Conditions are met
// Grade -> 9 : Conditions (i) and (ii) are met
// Grade -> 8 : Conditions (ii) and (iii) are met
// Grade -> 7 : Conditions (i) and (iii) are met
// Grade -> 6 : Only one condition is met
// Grade -> 5 : None of the conditions are met

// Write a program to display the grade of a given steel.

#include <stdio.h>
int main(){
    int hardness, ts;
    float cc;
    printf("Enter the Hardness: ");
    scanf("%d", &hardness);
    printf("Enter the Carbon Content: ");
    scanf("%f", &cc);
    printf("Enter the Tensile Strength: ");
    scanf("%d", &ts);

    if(hardness > 50 && cc < 0.7 && ts > 5600){
        printf("Grade 10");
    }else if(hardness > 50 && cc < 0.7){
        printf("Grade 9");
    }else if(cc < 0.7 && ts > 5600){
        printf("Grade 8");
    }else if(hardness > 50 && ts > 5600){
        printf("Grade 7");
    }else if(hardness > 50 || cc < 0.7 || ts > 5600){
        printf("Grade 6");
    }else{
        printf("Grade 5");
    }

    return 0;
}