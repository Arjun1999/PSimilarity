#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long long int max,min,sum=0;
    int *arr = malloc(sizeof(int) * 5);
     scanf("%d",&arr[0]);
      max=arr[0],min=arr[0],sum=sum+arr[0];                
    for(int arr_i = 1; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(max<arr[arr_i])
            max=arr[arr_i];
            if(min>arr[arr_i])
                min=arr[arr_i];
        sum=sum+arr[arr_i];
    }
    printf("%lld %lld",sum-max,sum-min);   
    return 0;
}
