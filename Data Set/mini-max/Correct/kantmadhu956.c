#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long int sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    
    return 0;
}
