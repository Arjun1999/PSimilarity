#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long  a,b,c,d,e,i,j,p[1000],t=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    p[0]=e+b+c+d;
    p[1]=a+c+d+e;
    p[2]=a+b+d+e;
    p[3]=a+b+c+e;
    p[4]=a+b+c+d;
    for(i=0;i<4;i++)
        {for(j=0;j<4-i;j++)
        {if(p[j]>p[j+1])
            {t=p[j];
            p[j]=p[j+1];
             p[j+1]=t;}}}
    printf("%lld %lld",p[0],p[4]);
    
    return 0;
}
