#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long int sum=0,max=0,min=9223372036854775807;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    
    for(int a=0; a<5;a++){
        if((sum-arr[a])>max)
          max=sum-arr[a];
        if((sum-arr[a])<min)
          min=sum-arr[a];
    }
    printf("%lld %lld ",min,max);
    return 0;
}
