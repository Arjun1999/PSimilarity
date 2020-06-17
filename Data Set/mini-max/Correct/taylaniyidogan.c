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
    
    long long int maxs = fmax(a,fmax(b,fmax(c,fmax(d,e))));
    long long int mins = fmin(a,fmin(b,fmin(c,fmin(d,e))));
    long long int sum = a+b+c+d+e;
    
    printf("%lld %lld",sum-maxs,sum-mins);
    return 0;
}
