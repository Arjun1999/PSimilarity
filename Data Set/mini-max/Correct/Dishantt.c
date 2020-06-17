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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int  g;
    g=(a>b && a>c && a>d && a>e?a: b>c && b>d && b>e?b: c>d && c>e?c: d>e?d: e);
    long long int s;
    s=(a<b && a<c && a<d && a<e?a: b<c && b<d && b<e?b: c<d && c<e?c: d<e?d: e);
    g=(a+b+c+d+e)-g;
    s=((a+b+c+d+e))-s;
    printf("%lld %lld",g,s);
    
    return 0;
}
