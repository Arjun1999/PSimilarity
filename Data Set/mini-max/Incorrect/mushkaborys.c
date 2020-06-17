#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int *arr = malloc(sizeof(int) * 5);
    int *sum = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum[arr_i]=0;
    }
    
    int temp_min = sum[0], temp_max = sum[0];
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
        for(int arr_j = 0; arr_j < 5; arr_j++)
        {
            sum[arr_i] = sum[arr_i] + arr[arr_j];
        }
        sum[arr_i] = sum[arr_i] - (arr_i+1);
        
        //temp_min = sum[0];
        //temp_max = sum[0];
        if(arr_i == 0)
            temp_min=sum[arr_i];
    if(temp_min > sum[arr_i])
        temp_min=sum[arr_i];
        
    if(temp_max < sum[arr_i])
        temp_max = sum[arr_i];
    }
    printf("%d %d", temp_min, temp_max);
    return 0;
}
