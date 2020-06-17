#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {   
    long int max=0,sum=0;
   long  int *arr = malloc(sizeof(int) * 5);
    for(long int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }  long int min=arr[0];
    for(long int arr_i = 0; arr_i < 5; arr_i++){
       if(arr[arr_i]>max){
           max=arr[arr_i];}
       sum+=arr[arr_i];
    }
     for(long int arr_i = 0; arr_i < 5; arr_i++){
       if(arr[arr_i]<min)
           min=arr[arr_i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
} 
