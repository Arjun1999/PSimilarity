#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    unsigned long long int max_val = 0ULL, min_val = (~0ULL), temp_total; 
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for( int i = 0; i < 5; i++ )
    {
        temp_total = 0;
        for( int j = 0; j < 5; j++ )
        {
            if( j == i )
                continue;
            temp_total += arr[j];         
        }
        if( temp_total > max_val )
            max_val = temp_total;
        if(temp_total < min_val )
            min_val = temp_total;
    }
    printf("%llu %llu", min_val, max_val);
    return 0;
}
