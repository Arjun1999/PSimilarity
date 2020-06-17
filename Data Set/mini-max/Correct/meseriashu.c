#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long sum = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum = sum + (long)(arr[arr_i]);
    }
    
    long min = 0;
    long max = 0;
    long t;
    for(int i=0; i<5; i++)
    {
        if(i == 0)
        {
            min = sum - arr[0];
            max = min;
        }
        else
        {
            t = sum - arr[i];
            if(t<min) min = t;
            if(t>max) max = t;
        }
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
