#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j;
    long int sum[5]={0,0,0,0,0},temp;
    int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j!=i){
                sum[i]+=arr[j];
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=i;j<5;j++){
            if(sum[i]>sum[j]){
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    printf("%ld %ld",sum[0],sum[4]);
    
    return 0;
}
