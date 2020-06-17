#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int minNum = LONG_MAX;
    long int maxNum = LONG_MIN;
    
    long int sum = a + b + c + d;
    minNum = fmin(sum, minNum);
    maxNum = fmax(sum, maxNum);
    
    sum = a + b + c + e;
    minNum = fmin(sum, minNum);
    maxNum = fmax(sum, maxNum);
    
    sum = a + b + d + e;
    minNum = fmin(sum, minNum);
    maxNum = fmax(sum, maxNum);
    
    sum = a + c + d + e;
    minNum = fmin(sum, minNum);
    maxNum = fmax(sum, maxNum);
    
    sum = b + c + d + e;
    minNum = fmin(sum, minNum);
    maxNum = fmax(sum, maxNum);
    
    printf("%lld %lld", minNum, maxNum);
    
    return 0;
}
