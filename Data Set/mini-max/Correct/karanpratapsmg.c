#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5),arr_i,j=0,temp,big,small,sum=0;
    long int max=0,min=0;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
       sum+=arr[arr_i];
    }
    small=big=arr[0];
    for(j=1;j<5;j++){
        if(arr[j]>big)
            big=arr[j];
        else if(arr[j]<small)
            small=arr[j];
    }
    max=sum-small;
    min=sum-big;
    printf("%ld %ld",min,max);
    return 0;
}
