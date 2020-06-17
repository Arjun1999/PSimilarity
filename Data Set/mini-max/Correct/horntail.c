#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int min(long int x, long long int y)
{
    if(x < y )
    return x;
    return y;
}

long long int max(long long int x, long long int y)
{
    if(x > y )
    return x;
    return y;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c, d, e; 
   
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum = a + b + c + d + e;
    long long int min1 = min(min(min(a, b), min(c, d)), e );
    long long int max1 = max(max(max(a, b), max(c, d)), e );
    printf("%lld\t%lld\n", sum - max1, sum - min1 );
    
    return 0;
}
