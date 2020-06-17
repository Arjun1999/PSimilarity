#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i , j;
   long long sum[5] = {0};
   long long min = 0, max = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(i = 0; i < 5 ; i++){

        for(j = 0 ; j < 5 ; j++){

            if(i != j)
                sum[i] += arr[j];

        }

   }
   min = max = sum[0];
   for(i = 0 ; i < 5 ; i++ )
   {
       if(sum[i]< min)
        min  = sum[i];
       if(sum[i] > max)
        max = sum[i];
   }
    printf("%ld %ld",min, max);
    return 0;
}
