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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int* sum=malloc(sizeof(long int)*5);
    sum[0]=a+b+c+d;
    sum[1]=a+b+c+e;
    sum[2]=a+b+d+e;
    sum[3]=a+d+c+e;
    sum[4]=e+b+c+d;
    long int lar; 
    long int sma; 
    lar=sum[0];
    sma=sum[0];
    for(int i=0;i<5;i++)
        {
        if(sum[i]>lar)
            {
            lar=sum[i];
        }
        if(sum[i]<sma)
            {
            sma=sum[i];
        }
    }
    printf("%lld %lld",sma,lar);
    return 0;
}
