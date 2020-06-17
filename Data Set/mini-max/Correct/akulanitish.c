#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,q,w,r,t,y,u,j,o,p,l,z; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    q=(a>b)?a:b;
    w=(q>c)?q:c;
    r=(w>d)?w:d;
    t=(r>e)?r:e;
    y=a+b+c+d+e-t;
   o=(a<b)?a:b;
    p=(o<c)?o:c;
    l=(p<d)?p:d;
    z=(l<e)?l:e;
    
    j=a+b+c+d+e-z;
    printf("%lld %lld",y,j);
    
    return 0;
}
