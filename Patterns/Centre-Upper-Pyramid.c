#include <stdio.h>

int main() {
    int n ; // You can change the number of rows here
    printf("Enter the value of n:");
    scanf("%d",&n);
    // 1. OUTER LOOP: Controls the rows (i)
    for(int i = 1; i <= n; i++){
        
        // 2. INNER LOOP: Prints Leading Spaces for Center Alignment (j)
        // Runs (n - i) times
        for(int j = n; j >=i; j--){
            printf(" ");
        }
        
        // 3. INNER LOOP: Prints Characters and Gaps (k)
        // Runs (i) times
        for(int k = 1; k <= i; k++){
            printf("* "); // The character (*) followed by a space (gap)
        }
        
        // 4. NEWLINE: Moves to the next row
        printf("\n");
    }
    
    return 0;
}