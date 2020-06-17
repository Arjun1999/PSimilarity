#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long unsigned int *arr = malloc(sizeof(long int) * 5);
    long long unsigned int sum[5];
    long long  unsigned int min,max,sum1;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%llu",&arr[arr_i]);
    }
    sum1 = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    
    
    

    
    for(int i = 0; i<5; i++)
    {
        sum[i] = sum1 - arr[i];
    }
    min = sum[0];
    max = sum[0];
       
 
    for(int i =0; i<=4; i++ )
    {
        if(sum[i] >= max)
        {
            max = sum[i];
        }
        if(sum[i] < min )
        {
            min = sum[i];
        }
    }printf("%llu %llu",min,max);
    
    return 0;
}
