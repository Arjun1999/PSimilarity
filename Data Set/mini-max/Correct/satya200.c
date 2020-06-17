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
    long long int max = 0, min = 0, res = 0;
    res = a+b+c+d;
    max = min = res;
    
    res = a+b+c+e;
    if(res > max)
        max = res;
    
    if(res < min)
        min = res;
    
     res = a+b+d+e;
    if(res > max)
        max = res;
    
    if(res < min)
        min = res;
    
     res = a+c+d+e;
    if(res > max)
        max = res;
    
    if(res < min)
        min = res;
    
     res = b+c+d+e;
    if(res > max)
        max = res;
    
    if(res < min)
        min = res;
    
    printf("%lld %lld\n",min,max);
    return 0;
}
