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
    long long int a1,b1,c1,d1,e1;
    long long int max,min;
    a1=b+c+d+e;
    b1=a+c+d+e;
    c1=a+b+d+e;
    d1=a+b+c+e;
    e1=a+b+c+d;
    max=a1;min=a1;
    if(b1>max)
        max=b1;
    if(b1<min)
        min=b1;
    if(c1>max)
        max=c1;
    if(c1<min)
        min=c1;
    if(d1>max)
        max=d1;
    if(d1<min)
        min=d1;
    if(e1>max)
        max=e1;
    if(e1<min)
        min=e1;
    printf("%lld %lld\n",min,max);
    return 0;
}
