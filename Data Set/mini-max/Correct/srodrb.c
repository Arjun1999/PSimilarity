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
    
    /* local variables */
    int n=5;
    long int min_sum = LONG_MAX, max_sum = 0;
    
    for(int excluded_index = 0; excluded_index < n; excluded_index++)
    {
        long int sum = 0;
        for(int index = 0; index < n; index++)
        {
            if (index != excluded_index)
                sum += arr[index];
        }
        min_sum = (sum <= min_sum) ? sum : min_sum;
        max_sum = (sum >= max_sum) ? sum : max_sum;
    }
    
    printf("%ld %ld\n", min_sum, max_sum);
    
    return 0;
}
