#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    long long int sum=0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    long long int max=0, min = 5000000000;
    for(int j=0;j<5;j++){
        if(sum-arr[j]>max)
            max= sum - arr[j];
        if(sum-arr[j]<min){
            min = sum- arr[j];
        }
    }
    printf("%lld %lld", min , max);
    return 0;
}
