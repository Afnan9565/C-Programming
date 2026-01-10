// Write a program to find the range of a set of numbers entered through the keyboard.
// Range is the difference between the smallest and the biggest number in the list
#include <stdio.h>

int main() {
    int num, min, max;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    min = max = num;   // first number decides both

    do {
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }

    } while (choice == 'y' || choice == 'Y');

    printf("\nSmallest number: %d", min);
    printf("\nLargest number: %d", max);
    printf("\nRange: %d\n", max - min);

    return 0;
}
