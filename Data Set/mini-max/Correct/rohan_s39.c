#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i;
    long sum=0;
    long min=0;
    long max=0;
    long temp=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    min=sum;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       temp=sum-arr[arr_i];
        if(temp>max)
            max=temp;
        if(temp<min)
            min=temp;
    }    
    printf("%ld %ld",min,max);
    return 0;
}
