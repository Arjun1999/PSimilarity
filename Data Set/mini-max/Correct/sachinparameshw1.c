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
    long long int max=0;
    long long int maximum=0, minimum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        min=e;
    if(a>max)
        max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
    maximum=a+b+c+d+e-min;
    minimum=a+b+c+d+e-max;
    printf("%lld %lld",minimum, maximum);
    return 0;
}
