#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *arr = malloc(sizeof(int) * 5),k,sum=0,sum1=0;
    for(long arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }for (long i=0;i<5;i++){
        for (long j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
                
            }
        }
    }for(long i=0;i<5-1;i++)
        {
        sum=sum+arr[i];
    }for(long i=1;i<5;i++)
        {
        sum1=sum1+arr[i];
    }printf("%lld\t%lld",sum,sum1);
    return 0;
}
