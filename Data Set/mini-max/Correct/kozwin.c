#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min = 0, max = 0,sum=0,s=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum = sum+arr[arr_i];
    }
    min = sum-arr[0];
    max = sum-arr[0];
    for(int arr_i = 0; arr_i <5; arr_i++)
    {
            s = sum - arr[arr_i];
            if(s>max) max = s;
            if(s<min) min = s;
    }
    printf("%li %li",min,max);
    return 0;
}
