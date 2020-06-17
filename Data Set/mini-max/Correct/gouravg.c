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
    
    long long int *sum = malloc(sizeof(long long int) * 5);
    sum[0]=arr[0]+arr[1]+arr[2]+arr[3];
    sum[1]=arr[0]+arr[1]+arr[2]+arr[4];
    sum[2]=arr[0]+arr[1]+arr[4]+arr[3];
    sum[3]=arr[0]+arr[4]+arr[2]+arr[3];
    sum[4]=arr[4]+arr[1]+arr[2]+arr[3];
    
    long long int max=sum[0],min=sum[0];
    for(int i=0;i<5;i++)
        {
        if(sum[i]>max){max=sum[i];}
        if(sum[i]<min){min=sum[i];}
    }
    
    printf("%lld %lld",min,max);
    return 0;
}
