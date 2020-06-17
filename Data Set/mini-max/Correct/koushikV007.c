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
    
    unsigned long min_max[5] = {0, 0, 0, 0, 0}, sum = 0;
    
    for(int i = 0; i < 5; i++)
        sum += arr[i];
    
    for(int i = 0; i < 5; i++)
        min_max[i] = sum - arr[i];
    
    unsigned long min_sum = min_max[0];
    unsigned long max_sum = min_max[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(min_max[i] < min_sum)
            min_sum = min_max[i];
    }
    for(int i = 1; i < 5; i++)
    {
        if(min_max[i] > max_sum)
            max_sum = min_max[i];
    }
    printf("%lu %lu",min_sum,max_sum);
    return 0;
}
