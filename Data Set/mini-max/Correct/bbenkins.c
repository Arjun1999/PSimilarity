#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int min = arr[0], max = arr[0];
    int i;
    
    //find min
    for(i=1; i<5; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    
    //find max
    for(i=1; i<5; i++){
        if(arr[i] > max)
            max = arr[i];
    }
  
    long int sum = 0;
    long int sum_min, sum_max;
    
    //find sum
    for(i=0; i<5; i++){
        sum += arr[i];
    }
    
    sum_max = sum - min;
    sum_min = sum - max;
    
    printf("%ld %ld", sum_min, sum_max);
    
    return 0;
}
