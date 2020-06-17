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
    long int e,sum,min,max;
    int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=a;
    max=a;
    if(b<min)
        {min=b;}
    if(c<min)
        {min=c;}
    if(d<min)
        {min=d;}
    if(e<min)
        {min=e;}
    if(b>max)
        {max=b;}
    if(c>max)
        {max=c;}
    if(d>max)
        {max=d;}
    if(e>max)
        {max=e;}
    printf("%lld %lld",sum-max,sum-min);
    
    return 0;
}
