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
    long long int min,max,sum_min,sum_max;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    min = a;
    max = a;
    
    if(min>b)
        min = b;
    if(min>c)
        min = c;
    if(min>d)
        min = d;
    if(min>e)
        min = e;
    
        sum_max = a + b + c + d + e - min;
        
     if(max<b)
        max = b;
     if(max<c)
        max = c;
     if(max<d)
        max = d;
     if(max<e)
        max = e;
        
        sum_min = a + b + c + d + e - max;
        
        printf("%lld %lld\n",sum_min,sum_max);
    
    return 0;
}
