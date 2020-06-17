#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a,b,c,d,e,sum[5],min=0,max=0; 
    int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0]=(a+b+c+d);
    sum[1]=(a+b+c+e);
    sum[2]=(a+b+d+e);
    sum[3]=(a+c+d+e);
    sum[4]=(b+c+d+e);
    min=sum[0];
    max=sum[0];
    for(i=1;i<5;i++)
        {
        if(min>sum[i])
            min=sum[i];
        if(max<sum[i])
            max=sum[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
