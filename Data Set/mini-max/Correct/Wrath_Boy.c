#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int max(long int a, long int b){
    
    if (a > b)
        return a;
    else
        return b;
    
}

long int min(long int a, long int b){
    if (a > b)
        return b;
    else
        return a;
}

int main(){
    
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    int min_var;
    int max_var;
    
    min_var = min(a,b);
    min_var = min(min_var, c);
    min_var = min(min_var, d);
    min_var = min(min_var, e);
    
    max_var = max(a,b);
    max_var = max(max_var, c);
    max_var = max(max_var, d);
    max_var = max(max_var, e);
    
 printf("%ld %ld", a+b+c+d+e-max_var, a+b+c+d+e-min_var);
    
    return 0;
}
