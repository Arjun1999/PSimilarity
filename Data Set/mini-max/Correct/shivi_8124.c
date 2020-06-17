#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long int arr[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    unsigned long long int min=arr[0];
    unsigned long long int max=arr[0],sum=0;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
        sum+=arr[i];
    }
    
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
