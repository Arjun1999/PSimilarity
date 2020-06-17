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
    
    /* TODO: Consider using array and softing.
        Reason: In case input quantity increases.   
    */
    
    long long int original = a + b + c + d + e;
    long long int min = original;
    long long int max = 0;
    
    min = min < original - a ? min : original - a;
    min = min < original - b ? min : original - b;
    min = min < original - c ? min : original - c;
    min = min < original - d ? min : original - d;
    min = min < original - e ? min : original - e;
    
    max = max > original - a ? max : original - a;
    max = max > original - b ? max : original - b;
    max = max > original - c ? max : original - c;
    max = max > original - d ? max : original - d;
    max = max > original - e ? max : original - e;
    
    printf("%lld %lld", min, max);
    
    return 0;
}
