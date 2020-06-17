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
    long long int max, min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    max = a+b+c+d;
    min = a+b+c+d;
    
    if (max < a+b+c+e){
        max = a+b+c+e;
    }
    if (min > a+b+c+e){
        min = a+b+c+e; 
    }
    
    if (max < a+b+d+e){
        max = a+b+d+e;
    }
    if (min > a+b+d+e){
        min = a+b+d+e;
    }
    
    if (max < a+c+d+e){
        max = a+c+d+e;
    }
    if (min > a+c+d+e){
        min = a+c+d+e;
    }
    
    if (max < b+c+d+e){
        max = b+c+d+e;
    }
    if (min > b+c+d+e){
        min = b+c+d+e;
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
