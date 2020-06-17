#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a,max,min,k,j; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max=a;
    min=a;
    if(b>max)
    {
      max=b;
    }
    else
    {
        if(b<min)
        {
            min=b;
        }
    }
    if(c>max)
    {
      max=c;
    }
    else
    {
        if(c<min)
        {
            min=c;
        }
    }
    if(d>max)
    {
      max=d;
    }
    else
    {
        if(d<min)
        {
            min=d;
        }
    }
    if(e>max)
    {
      max=e;
    }
    else
    {
        if(e<min)
        {
            min=e;
        }
    }
    k=a+b+c+d+e-max;
    j=a+b+c+d+e-min;
    printf("%lld %lld",k,j);
    return 0;
}
