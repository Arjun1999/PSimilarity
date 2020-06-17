#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int minimum(long int a,long int b,long int c,long int d,long int e)
    {
    long int min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        min=e;
    return min;
    
}
long int maximum(long int a,long int b,long int c,long int d,long int e)
    {
    long int min=a;
    if(b>min)
        min=b;
    if(c>min)
        min=c;
    if(d>min)
        min=d;
    if(e>min)
        min=e;
    return min;
    
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min=minimum(a,b,c,d,e);
    max=maximum(a,b,c,d,e);
    printf("%ld ",a+b+c+d+e-max);
    printf("%ld",a+b+c+d+e-min);
    
    return 0;
}
