#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    int *arr = malloc(sizeof(int) * 5);
    long long int max,maxsum,minsum;
    long long int min=0,sum=0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    max = arr[1];
    min = arr[1];
    int i = 0;
    while(i<5)
    {
        ++i;
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(min>arr[i])
           {
               min = arr[i];
           }
    }
        sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    printf("%lld %lld", sum-max, sum-min-1);
    return 0;
}
