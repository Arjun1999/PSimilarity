#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int min=arr[0];
    long int max=arr[0];
    long int sum=0;
    for(int i=0; i<5; i++){
        if (arr[i]<min) min=arr[i];
        if (arr[i]>max) max=arr[i];
        sum+=arr[i];
    }
    
    printf("%ld %ld", sum-max, sum-min);
    
    return 0;
}
