// Write a program for a matchstick game being played between the computer and a user.
// Your program should ensure that the computer always wins.
// Rules for the game are as follows:
//     - There are 21 matchsticks
//     - The computer asks the player to pick 1,2,3, or 4 matchsticks.
//     - After the person picks, the computer does its picking.
//     - Whoever is forced to pick up the last matchstick loses the game.
#include <stdio.h>

int main() {
    int sticks = 21;
    int user, computer;

    while (sticks > 1) {
        printf("\nMatchsticks left: %d", sticks);
        printf("\nPick 1, 2, 3, or 4: ");
        scanf("%d", &user);

        // prevent cheating
        if (user < 1 || user > 4) {
            printf("Invalid move! Pick between 1 and 4.\n");
            continue;
        }

        computer = 5 - user;

        sticks = sticks - user - computer;

        printf("Computer picked: %d\n", computer);
    }

    printf("\nOnly 1 matchstick left.");
    printf("\nYou are forced to pick it.");
    printf("\nYou lose. Computer wins!\n");

    return 0;
}
