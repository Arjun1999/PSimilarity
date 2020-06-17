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
    long  long int sum,min=0,max=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=sum-a;
    max=min;
    if(sum-b<min)
        min=sum-b;
    if(sum-c<min)
        min=sum-c;
    if(sum-d<min)
        min=sum-d;
    if(sum-e<min)
        min=sum-e;
    if(sum-b>max)
        max=sum-b;
    if(sum-c>max)
        max=sum-c;
    if(sum-d>max)
        max=sum-d;
    if(sum-e>max)
        max=sum-e;
    printf("%lld %lld",min,max);
    return 0;
}
