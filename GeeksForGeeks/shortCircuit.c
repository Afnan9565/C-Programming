#include <stdio.h>

int main() {
    // int a = 10;
    
    // if (a < 0 && (a = 22)) {
    //     printf("if block\n");
    // }
    // else {
    //     printf("else block\n");
    // }
    
    // printf("Value of a: %d", a);
    // return 0;
    
    int a = 10;
    
    if (a < 0 || (a = 22)) {
        printf("if block\n");
    }
    else {
        printf("else block\n");
    }
    
    printf("Value of a: %d", a);
    return 0;
}