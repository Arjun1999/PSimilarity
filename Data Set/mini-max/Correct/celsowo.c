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
    
    // Except 5
    long long int min = a + b + c + d;
    long long int max = a + b + c + d;
    
    // Except 4
    min = a + b + c + e < min ? a + b + c + e : min;
    max = a + b + c + e > max ? a + b + c + e : max;
    
    // Except 3
    min = a + b + d + e < min ? a + b + d + e : min;
    max = a + b + d + e > max ? a + b + d + e : max;
    
    // Except 2
    min = a + c + d + e < min ? a + c + d + e : min;
    max = a + c + d + e > max ? a + c + d + e : max;
    
    // Except 1
    min = b + c + d + e < min ? b + c + d + e : min;
    max = b + c + d + e > max ? b + c + d + e : max;
    
    printf("%lld %lld", min, max);
    
    return 0;
}
