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
    long long int min = 9999999999;
    long long int max = -1;
    scanf("%lld",&a);
    if(a<min)
        min = a;
    if(a>max)
        max = a;
    scanf("%lld",&b);
    if(b<min)
        min = b;
    if(b>max)
        max = b;
    scanf("%lld",&c);
    if(c<min)
        min = c;
    if(c>max)
        max = c;
    scanf("%lld",&d);
    if(d<min)
        min = d;
    if(d>max)
        max = d;
    scanf("%lld",&e);
    if(e<min)
        min = e;
    if(e>max)
        max = e;
    printf("%lld ", a+b+c+d+e-max);
    printf("%lld", a+b+c+d+e-min);
    return 0;
}
