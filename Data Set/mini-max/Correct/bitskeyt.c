#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int min(long int a, long int b) {
    return a < b ? a : b;
}

long int max(long int a, long int b) {
    return a >= b ? a : b;
}

int main() {
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int mn = min(min(min(min(a, b), c), d), e);
    long int mx = max(max(max(max(a, b), c), d), e);
    long int sum = a + b + c + d + e;
    
    printf("%lld %lld", sum - mx, sum - mn);
    
    return 0;
}
