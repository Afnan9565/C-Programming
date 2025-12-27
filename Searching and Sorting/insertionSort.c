#include <stdio.h>
int main(){
    int array[30],temp,n,j,i;
    printf("Enter the number of elements in list\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for(i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    for(i = 1; i <= n-1; i++){
        temp = array[i];
        j = i-1;
        while((temp < array[j]) && (j >= 0)){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
    }
    printf("Sorted list in ascending order:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }
    return 0;
    }
