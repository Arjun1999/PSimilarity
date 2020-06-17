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
    long long int min;
    long long int max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum= a+b+c+d+e;
    if(b<=a && c<=a && d<=a && e<=a)
        max = a;
    if(a<=b && c<=b && d<=b && e<=b)
        max = b;
    if(a<=c && b<=c && d<=c && e<=c)
        max = c;
    if(a<=d && b<=d && c<=d && e<=d)
        max = d;
    if(a<=e && b<=e && c<=e && d<=e)
        max = e;
    printf("%lld ",sum-max);

    if(b>=a && c>=a && d>=a && e>=a)
        min = a;
    if(a>=b && c>=b && d>=b && e>=b)
        min = b;
    if(a>=c && b>=c && d>=c && e>=c)
        min = c;
    if(a>=d && b>=d && c>=d && e>=d)
        min = d;
    if(a>=e && b>=e && c>=e && d>=e)
        min = e;
    printf("%lld ",sum-min);

    return 0;
}
