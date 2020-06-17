#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long a; 
    long b; 
    long c; 
    long d;
    long e;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long sum[5];
    for(i=0;i<5;i++)
        sum[i]=0;
    sum[0]=b+c+d+e;
    sum[1]=b+a+d+e;
    sum[2]=b+c+a+e;
    sum[3]=b+c+d+a;
    sum[4]=a+c+d+e;
    long min=sum[0];
    long max=sum[0];
    for(i=0;i<5;i++)
        {
        if(max<sum[i])
            max=sum[i];
        if(min>sum[i])
            min=sum[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
