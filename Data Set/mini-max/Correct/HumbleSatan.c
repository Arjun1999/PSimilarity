#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],max,sum,min,maxsum,minsum; 
    int i;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    maxsum=0;
    minsum=0;
    sum=0;
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    maxsum=sum-min;
    minsum=sum-max;
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
