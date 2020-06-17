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
    long long int sum[5];
    long long int min, max;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum[0] = b + c + d + e;
    sum[1] = a + c + d + e;
    sum[2] = a + b + d + e;
    sum[3] = a + b + c + e;
    sum[4] = a + b + c + d;
    
    max = min = sum[0];
    for(int i = 1; i < 5; i++) {
        if(sum[i] > max) max = sum[i];
        if(sum[i] < min) min = sum[i];
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
