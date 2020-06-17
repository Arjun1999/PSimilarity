#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int biggest(int a, int b){
    if (a > b)
        return a;
    return b;
}

int smallest(int a, int b){
     if (a < b)
        return a;
    return b;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int total_sum = a+b+c+d+e;
    printf("%lld %lld", total_sum - biggest(biggest(biggest(biggest(d, e), c), b), a), total_sum - smallest(smallest(smallest(smallest(d, e), c), b), a));
    
    return 0;
}
