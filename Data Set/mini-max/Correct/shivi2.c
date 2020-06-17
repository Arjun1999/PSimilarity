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
    long int e,min,min1=0,min2=0,max,max1=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    min=a;
    if(min<b)
        min=b;
    if(min<c)
        min=c;
    if(min<d)
        min=d;
    if(min<e)
        min=e;
    max=a;
    if(max>b)
        max=b;
    if(max>c)
        max=c;
    if(max>d)
        max=d;
    if(max>e)
        max=e;
    min2=a+b+c+d+e;
    max1=min2-min;
    min1=min2-max;
    printf("%lld %lld",max1,min1);
    return 0;
}
