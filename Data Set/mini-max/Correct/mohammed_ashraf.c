#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    unsigned int min_value = UINT_MAX,max_value = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0;arr_i <5; arr_i++)
    {
        unsigned int sum = 0;
        for (int arr_j = 0;arr_j <5; arr_j++)
        {
            if( arr_i == arr_j)
            {
                
            }
            else
            {
                sum += arr[arr_j];
            }
        }
        if(sum > max_value)
        {
            max_value = sum;
        }
        if(sum < min_value)
        {
            min_value = sum;
        }
    }
    printf("%u %u",min_value,max_value);
    return 0;
}
