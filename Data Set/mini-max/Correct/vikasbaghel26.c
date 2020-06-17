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
    long int sum=0,max=0,min;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    min=sum;
    for(int i=0;i<5;i++){
        max=sum-arr[i]>max?sum-arr[i]:max;
        min=sum-arr[i]<min?sum-arr[i]:min;
    }
    printf("%ld\t%ld",min,max);
    return 0;
}
