#include <stdio.h>
int main(){ 
    int array[50],n,temp;
    printf("Enter the number of elements in list\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d",&array[i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }
    return 0;

    }