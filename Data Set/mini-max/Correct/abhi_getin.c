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
    long long int sum[5]={0,0,0,0,0},min=0xffffffff,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
        {
            for(int j =0; j <5;j++)
            {
              if(arr_i != j)
                   sum[arr_i] += arr[j];
            }
            if(sum[arr_i] >= max)
                max = sum[arr_i];
            if(sum[arr_i] <= min)
                min = sum[arr_i];
        }
      
    }
    printf("%lld %lld",min,max);
    return 0;
}
