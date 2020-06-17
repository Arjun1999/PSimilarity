#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,b,c,d,e,f,g,h; 
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f=a;
    g=a+b+c+d+e;
    if(f<b)
        {
        f=b;
    }
    if(f<c)
        {
        f=c;
    }
    if(f<d)
        {
        f=d;
    }
    if(f<e)
        {
        f=e;
    }
    h=a;
    if(h>b)
        {
        h=b;
    }
    if(h>c)
        {
        h=c;
    }
    if(h>d)
        {
        h=d;
    }
    if(h>e)
        {
        h=e;
    }
    printf("%lld %lld",g-f,g-h);
    return 0;
}
