// According to Gregorian Calendar, it was Monday on the date 01/01/01. 
// If any year is input throught the keyboard write a program to find out what is the day on 1st jan of this year.

#include <stdio.h>

int isLeap(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int main() {
    int year;
    long totalDays = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        totalDays += isLeap(i) ? 366 : 365;
    }

    int day = totalDays % 7;

    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}
