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
    
    long long int x,y,z;
    
    y = 0;
    z = a + b + c + d;
    
    
    x = a + b + c + d;
    if (x > y)
        y = x;
    if (x < z)
        z = x;
    
        x = a + b + c + e;
    if (x > y)
        y = x;
    if (x < z)
        z = x;
    
        x = a + b + d + e;
    if (x > y)
        y = x;
    if (x < z)
        z = x;
    
        x = a + b + c + e;
        if (x > y)
        y = x;
    if (x < z)
        z = x;
    
        x = a + c + d + e;
    if (x > y)
        y = x;
    if (x < z)
        z = x;
    
        x = b + c + d + e;
    if (x > y)
        y = x;
    if (x < z)
        z = x;
    
    printf("%lld %lld\n", z,y);
    
    return 0;
}
