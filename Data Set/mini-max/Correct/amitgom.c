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
    long int max=a,min=a,sum;
    sum=a+b+c+d+e;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min>d)
        min=d;
    if(min>e)
        min=e;
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
