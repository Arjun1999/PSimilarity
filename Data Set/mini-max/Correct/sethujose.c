#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define MAX(a, b) ((a>b)? a: b)
#define MIN(a, b) ((a<b)? a: b)

int main(){
    long long int a; 
    long long int b; 
    long long  int c; 
    long long int d;
    long long int e;
    
    long long int max = 0;
    long long int min = 0;
    long long int sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum = a+b+c+d+e;
    
    max = MAX(a, b);
    max = MAX(max, c);
    max = MAX(max, d);
    max = MAX(max, e);
    
    min = MIN(a, b);
    min = MIN(min, c);
    min = MIN(min, d);
    min = MIN(min, e);
    
    
    printf("%lld %lld", sum-max, sum-min);
    
    return 0;
}
