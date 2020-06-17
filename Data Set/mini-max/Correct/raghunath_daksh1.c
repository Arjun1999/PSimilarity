#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int max(long int a,long int b)
    {
    if(a>b)
        return a;
    else return b;
}
long int min(long int a,long int b)
    {
    if(a<b)
        return a;
    else return b;
}
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,x,y,m;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    m=max(a,b);
    x=max(c,d);
    m=max(m,x);
    m=max(m,e);
    x=a+b+c+d+e;
    m=x-m;
    printf("%lld",m);
    m=min(a,b);
    x=min(c,d);
    m=min(m,x);
    m=min(m,e);
    a=a+b+c+d+e;
    m=a-m;
    printf(" %lld",m);
    return 0;
}
