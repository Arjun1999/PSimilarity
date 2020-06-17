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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long long int co[6];
    co[1]=a+b+c+d;
        co[2]=b+c+d+e;
        co[3]=c+d+e+a;
        co[4]=d+e+a+b;
        co[5]=e+a+b+c;
    long long int min=co[1],max=co[1];
    for(int i=1;i<=5;++i)
    {if(co[i]<=min)
          min=co[i];
        if(co[i]>=max)
            max=co[i];}
    printf("%lld %lld",min,max);
    return 0;
}
