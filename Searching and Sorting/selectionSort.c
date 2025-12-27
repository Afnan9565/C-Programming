#include <stdio.h>
int main(){ 
    int size,i,j,temp,list[100];
    printf("Enter the number of elements in list\n");
    scanf("%d", &size);
    printf("Enter %d integers\n", size);
    for(i = 0; i < size; i++){
        scanf("%d",&list[i]);
    }
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(list[i] > list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for(i = 0; i < size; i++){
        printf("%d\n", list[i]);
    }
    return 0;
    }