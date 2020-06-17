#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


typedef unsigned long uint64_t;

uint64_t calc_sum( int num, int *arr, int *max, int *min )
{
    uint64_t sum=0;
    int i;
    if( !arr || !max || !min ) return 0;
    
    for( i=0; i<num; i++ ){
        sum+= arr[i];
        if ( arr[i]> (*max) ) *max=arr[i];
        if (arr[i]<(*min)) *min=arr[i];
    }
    return sum;
}
int main() {
    int max=1, min=1000000000;
    uint64_t sum;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum = calc_sum(5, arr, &max, &min);
    if (sum ) {
       assert( max < sum );
       assert(min < sum);
       printf("%ld %ld\n", sum-max, sum-min);
    } 
    return 0;
}
