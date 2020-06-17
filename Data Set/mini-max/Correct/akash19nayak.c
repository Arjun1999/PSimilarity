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
    int i, min= arr[0], max = arr[0], min_pos = 0, max_pos = 0;
    long int min_sum = 0, max_sum = 0;
    for(i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max_pos = i;
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min_pos = i;
            min = arr[i];
        }
    }
    for(i=0; i<5; i++)
    {
        if(i!=max_pos)
            min_sum += arr[i];
        if(i!=min_pos)
            max_sum += arr[i];
    }
    printf("%ld %ld", min_sum, max_sum);
    return 0;
}
