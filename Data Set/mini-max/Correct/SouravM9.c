#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int max,min,sum[5];
    for(int j=0;j<5;j++)
        sum[j]=0;
    sum[0]=a+b+c+d;
    sum[1]=a+b+c+e;
    sum[2]=a+b+d+e;
    sum[3]=a+c+d+e;
    sum[4]=b+c+d+e;
    max=sum[0];
    min=sum[0];
    for(int i=1;i<5;i++)
    {
        if(max<sum[i])
            max=sum[i];
        if(min>sum[i])
            min=sum[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
