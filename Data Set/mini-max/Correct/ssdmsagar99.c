#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long sum=0;
    int min=0;
    int max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum +=arr[arr_i];
        
        if(arr[arr_i]< arr[min])
            min = arr_i;
        if(arr[arr_i]> arr[max])
            max = arr_i;
        
    }
    
    printf("%lld %lld",sum-arr[max],sum-arr[min]);
    return 0;
}
