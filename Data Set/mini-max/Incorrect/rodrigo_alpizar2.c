#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solveMin(int arrayMin[],int size){
    
    
    int sum = 0;
    for (int i = 0; i<size-1; i++){
        sum = arrayMin[i] + sum;
    }
    
    printf("El valor minimo del arreglo es %d", sum);
}

void solveMax(int arrayMax[],int size){
     int sum = 0;
    for (int i = 1; i<size; i++){
        sum = arrayMax[i] + sum;
    }
    
    printf("El valor max del arreglo es %d", sum);
}

int[] bubbleSort(int sortArray[], int size){
 int base;
    for (int i=0; i<size; i++){
        for (int j = 0; j<size; j++){
            if(sortArray[j]>=sortArray[j+1]){
            base=sortArray[j];
            sortArray[j] = sortArray[j+1];
            sortArray[j+1]= base; 
            }
        }
    }
    
    for (int k=0;k<size; k++){
        printf("%d ",sortArray[k]);
    }
            
    return sortArray[];
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int size = 5;
    
    int sortedArray[] = bubbleSort(arr[],size);
    solveMin(arr,size);
    solveMax(arr,size);
    
    
    
    return 0;
    
    
}
