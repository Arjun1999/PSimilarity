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
    long long int max=0;
    long long int f=b+c+d+e;
    long long int min=f;
    if(f>max)
        max=f;
    f=a+c+d+e;
    if(f<min)
        min=f;
    if(f>max)
        max=f;
    f=a+b+d+e;
    if(f<min)
        min=f;
    if(f>max)
        max=f;
    f=a+b+c+e;
    if(f<min)
        min=f;
    if(f>max)
        max=f;
    f=a+b+c+d;
    if(f<min)
        min=f;
    if(f>max)
        max=f;
    printf("%lld %lld",min,max);
    return 0;
}
