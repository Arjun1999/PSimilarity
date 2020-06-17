#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void minmax (int *arr){
    long max = LONG_MIN;
    long min = LONG_MAX;
    long sum = 0;
    int i;
    
    for (i = 0; i < 5; i++){
        for (int s = 0; s < 5; s++){
            if (s != i){
                sum += arr[s];
            }
        }
        if (sum > max){
            max = sum;
        }
        if (sum < min){
            min = sum;
        }
        
        sum = 0;
    }
    
    printf ("%ld %ld", min, max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    minmax(arr);
    return 0;
}
