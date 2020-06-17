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
    //have to find maximum and minimum 
    long int sum=0; 
    long int max=0;
    long int min=1000000000;
    if(a<min)
        min=a;
    if(a>max)
        max=a;
    
    if(b<min)
        min=b;
    if(b>max)
        max=b;
    
    if(c<min)
        min=c;
    if(c>max)
        max=c;
    
    if(d<min)
        min=d;
    if(d>max)
        max=d;
    
    if(e<min)
        min=e;
    if(e>max)
        max=e;
    sum= a+b+c+d+e;
    printf("%ld %ld", sum-max, sum-min);
    return 0;
}
