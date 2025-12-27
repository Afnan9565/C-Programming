#include <stdio.h>

int main() {
    int a = 25, b = 5;

    // a = 0001 1001 (25), b = 0000 0101 (5)
    printf("a & b: %d\n", a & b);   // 0000 0001 = 1
    printf("a | b: %d\n", a | b);   // 0001 1101 = 29
    printf("a ^ b: %d\n", a ^ b);   // 0001 1100 = 28
    printf("~a: %d\n", ~a);         // -(25 + 1) = -26 (2's complement)
    printf("a >> b: %d\n", a >> b); // 25 / 2^5  = 0
    printf("a << b: %d\n", a << b); // 25 * 2^5  = 800

    return 0;
}