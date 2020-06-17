#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum=a+b+c+d+e;
    long int min1= min(a,min(b,(min(c,min(d,e)))));
    long int max1= max(a,max(b,(max(c,max(d,e)))));
    printf("%llu %llu",sum-max1,sum-min1);
    return 0;
}
