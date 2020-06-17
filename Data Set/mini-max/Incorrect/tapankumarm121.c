#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {int min=15,max=0,arr_i;
            long int maxs=0,mins=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(arr_i=0;arr_i<5;arr_i++)
    {
      if(max<arr[arr_i])
          max=arr[arr_i];
      if(min>arr[arr_i])
          min=arr[arr_i];
    }
     for(arr_i=0;arr_i<5;arr_i++)
    {
      if(min!=arr[arr_i])
          maxs+=arr[arr_i];
      if(max!=arr[arr_i])
          mins+=arr[arr_i];
    }       
    printf("%ld  %ld",mins,maxs);
    return 0;
}
