#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    int *arr = malloc(sizeof(int) * 5);
    
    //read values and find the max and min
    int max = 0; //smallest possible number
    int min = 1000000000; //largest possible number
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       if (arr[arr_i] > max)
       {
           max = arr[arr_i];
       }
       else if (arr[arr_i] < min)
       {
           min = arr[arr_i];
       }
    }
    
    //get max sum
    int maxSum, minSum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
        
        if (arr[arr_i] != min)
        {
            maxSum = maxSum + &arr[arr_i];    
        }
    }
    
    printf("%d %d", minSum, maxSum);
        
    return 0;
}
