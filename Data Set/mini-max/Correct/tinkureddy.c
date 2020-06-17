#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int x,y,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    x=arr[0];
    y=arr[0];
    for(int arr_i=1;arr_i<5;arr_i++){
        if(x>arr[arr_i])
            x=arr[arr_i];
        else if(y<arr[arr_i])
            y=arr[arr_i];
    }
    printf("%ld %ld",sum-y,sum-x);
    return 0;
}
