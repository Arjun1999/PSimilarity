#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min;
    int maxima, minima;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < 5; arr_i++) {
        min = arr[arr_i];
        for (int j = i+1; j < 5; j++) {
            if (min > arr[j]){
                min = arr[j];
                arr[i] = arr[j];
                arr[j] = min;  
            }
        }
    }
    
    for(int i=0; i<5; i++) {
        minima = minima + arr[i];
        maxima = maxima + arr[5-1-i];
    }
    
    printf("%d %d",minima, maxima);
    return 0;
}
