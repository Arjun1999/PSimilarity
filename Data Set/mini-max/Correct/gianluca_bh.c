#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int max;
    int min;
    int first=1;
    unsigned long long sum=0;
       for(int arr_i = 0; arr_i < 5; arr_i++){
         scanf("%d",&arr[arr_i]); 
         sum+=arr[arr_i];
         if(first){
             first=0;
             min=arr[arr_i];
             max=arr[arr_i];
         }
        if(arr[arr_i]>max)
            max=arr[arr_i];
        if(arr[arr_i]<min)
            min=arr[arr_i];
    }
      printf("%llu %llu",sum-max,sum-min);
    return 0;
}
