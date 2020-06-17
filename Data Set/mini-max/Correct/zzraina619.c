#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

void minMax(int arr[])
{
    long long int  min = 0, max = 0, sum = 0;
    int i, j, k;
    long long int stor[5];
    
    for(j = 0; j<5; j++)
       sum += arr[j];
    for(i =0; i<5; i++)
    {
        stor[i] = sum - arr[i]; 
    }
    
    max = stor[0];
    min = stor[0];
    
    for(k=0; k<5; k++)
    {
        if(stor[k] > max)
            max = stor[k];
        else if(stor[k] < min)
            min = stor[k];
    }
    
    printf("%lld %lld", min, max);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    minMax(arr);
    return 0;
}
