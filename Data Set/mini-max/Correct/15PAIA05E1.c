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
    long long int d,max,min;
    long long int e,k,l,m,n,g;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    k=e+b+c+d;
    l=a+c+d+e;
    m=a+b+d+e;
    n=a+b+c+e;
    g=a+b+c+d;
    max=(k>l&&k>m&&k>n&&k>g)?k:(l>m&&l>n&&l>g)?l:(m>n&&m>g)?m:(n>g)?n:g;
    min=(k<l&&k<m&&k<n&&k<g)?k:(l<m&&l<n&&l<g)?l:(m<n&&m<g)?m:(n<g)?n:g;
    printf("%lld %lld",min,max);
    return 0;
}
