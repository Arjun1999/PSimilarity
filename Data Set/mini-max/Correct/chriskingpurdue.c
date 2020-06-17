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
    long long int min = 0, max = 0, tmp = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    min = max = b + c + d + e;
    
    tmp = a + c + d + e;
    if(tmp > max)
        max = tmp;
    if(tmp < min)
        min = tmp;
    
    tmp = a + b + d + e;
    if(tmp > max)
        max = tmp;
    if(tmp < min)
        min = tmp;
    
    tmp = a + b + c + e;
    if(tmp > max)
        max = tmp;
    if(tmp < min)
        min = tmp;
    
    tmp = a + b + c + d;
    if(tmp > max)
        max = tmp;
    if(tmp < min)
        min = tmp;
    
    printf("%lld %lld", min, max);
    
    
    return 0;
}
