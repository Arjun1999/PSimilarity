#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long long int min=0,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       min += arr[arr_i];
    }
    int i,j;
    for(i=0; i<5; i++){
        long long int sum=0;
        for(j=0; j<5; j++){
            if(i==j) continue;
            sum += arr[j];
        }
        if(sum<min) min=sum;
        if(sum>max) max=sum;
    }
    printf("%lld %lld",min,max);
    return 0;
}
