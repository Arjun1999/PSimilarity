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
    long long int sum = 0;
    for(int k=0; k < 5 ; k++)
    {
        sum += arr[k];
    }
    long long int min;
    long long int max;
    min= sum - arr[0];
    max= sum - arr[0];
    for(int i=1; i < 5 ; i++)
    {
        if(min >= sum-arr[i])
            min = sum-arr[i];
        else if( max <= sum-arr[i])
            max = sum-arr[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
