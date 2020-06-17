#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum[5];
    long long int min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0]=a+b+c+d;
    sum[1]=a+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=b+c+d+e;
    min=sum[0];
    max=sum[0];
    for(int i=0;i<5;i++){
        if(min>sum[i])
            min=sum[i];
        if(max<sum[i])
            max=sum[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
