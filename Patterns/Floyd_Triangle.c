#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        int x = (i % 2 == 0) ? 0 : 1; 

        for (int j = 1; j <= i; j++) {
            printf("%d", x);
            x = !x;  
        }

        printf("\n");
    }

    return 0;
}
