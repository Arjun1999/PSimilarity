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
    long long int max, max1, max2, max3, min, min1, min2, min3;
    long long int sum, minsum, maxsum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum = a + b + c + d + e;
    
    if(a > b)
       max1 = a;
    else max1 = b;
    
    if(c > d)
        max2 = c;
    else max2 = d;
    
    if (max2 > e)
        max3 = max2;
    else max3 = e;
    
    if( max3 > max1)
        max = max3;
    else max = max1;
    
    if(a < b)
       min1 = a;
    else min1 = b;
    
    if(c < d)
        min2 = c;
    else min2 = d;
    
    if (min2 < e)
        min3 = min2;
    else min3 = e;
    
    if( min3 < min1)
        min = min3;
    else min = min1;
    
    maxsum = sum - min;
    minsum = sum - max;
    
    printf("%lld %lld", minsum, maxsum);
    
    
    
    return 0;
}
