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
    long int max,mim,maxs,mims,s=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max=a>b?(((a>c?((a>d?(a>e?a:e):d>e?d:e)):c>d?(c>e?c:e):d>e?d:e))):b>c?(b>d?(b>e?b:e):(d>e?d:e)):c>d?(c>e?c:e):(d>e?d:e);
  mim=a<b?(((a<c?((a<d?(a<e?a:e):d<e?d:e)):c<d?(c<e?c:e):d<e?d:e))):b<c?(b<d?(b<e?b:e):(d<e?d:e)):c<d?(c<e?c:e):(d<e?d:e);
    s=a+b+c+d+e;
    
    maxs=s-mim;
    mims=s-max;
    
    printf("%lld %lld",mims,maxs);
    
    
    
    
    
    
    return 0;
}
