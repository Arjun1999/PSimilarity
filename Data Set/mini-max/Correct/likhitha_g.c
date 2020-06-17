#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(int) * 5);
    long int sum[5]={0},i,j,temp;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            if(i!=j){
                sum[i]+=arr[j];
            }
            else{
                continue;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(sum[j]>sum[j+1]){
                temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
            }
        }
    }
    printf("%ld %ld",sum[0],sum[4]);
    return 0;
}
