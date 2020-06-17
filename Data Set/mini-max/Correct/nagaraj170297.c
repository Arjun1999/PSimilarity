#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int sum[5]={0,0,0,0,0};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j!=i){
                sum[i]+=arr[j];
            }
        }
        //printf("%ld ",sum[i]);
    }
    long int min,max=0;
    min=sum[0];
    max=sum[0];
    for(i=1;i<5;i++){
        if(min>sum[i]){
            min=sum[i];
        }
        if(sum[i]>max){
            max=sum[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
