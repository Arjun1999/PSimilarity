#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,b,c,d,e,max,min,sum; 
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max=a;
    min=a;
    if (max<b)
        max=b;
    if (max<c)
        max=c;
    if (max<d)
        max=d;
    if (max<e)
        max=e;
    if (min>b)
        min=b;
    if (min>c)
        min=c;
    if (min>d)
        min=d;
    if (min>e)
        min=e;
    sum=a+b+c+d+e;
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
