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
    
    long long int min = a+b+c+d;
    long long int max = a+b+c+d;
    
    long long int a_exc =   b+c+d+e;
    long long int b_exc = a  +c+d+e;
    long long int c_exc = a+b  +d+e;
    long long int d_exc = a+b+c  +e;
    
    if(a_exc < min)
        min = a_exc;
    if(b_exc < min)
        min = b_exc;
    if(c_exc < min)
        min = c_exc;
    if(d_exc < min)
        min = d_exc;
    
    if(a_exc > max)
        max = a_exc;
    if(b_exc > max)
        max = b_exc;
    if(c_exc > max)
        max = c_exc;
    if(d_exc > max)
        max = d_exc;
    
    printf("%lld %lld", min, max);
    
    return 0;
}
