#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long int sum[5];
    int i,j;
    for(i=0;i<5;i++){
        sum[i] = 0;
        for(j=0;j<5;j++){
            if(i != j)  sum[i] = sum[i] + a[j];
        }
    }
    long long int min,max;
    min = sum[0] ;
    max = sum[0];
    for(i=0;i<5;i++){
        if(sum[i]<min)  min = sum[i];
        if(sum[i]>max)  max = sum[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
