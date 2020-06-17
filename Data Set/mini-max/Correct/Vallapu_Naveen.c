#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long int min = arr[0];
    long long int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    long long int min_sum = 0,max_sum = 0;
    for(int i=0;i<5;i++)
    {
        if(min != max)
        {
        if(arr[i] != min)
            max_sum += arr[i];
        if(arr[i] != max)
            min_sum += arr[i];
        }
        if(i != 4 && min == max)
        {
            min_sum += arr[i];
            max_sum += arr[i];
        }
    }
    printf("%lld %lld",min_sum,max_sum);
    return 0;
}
