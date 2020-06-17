#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int summation(long int a, long int b, long int c,long int d);
    long long int minimum(long long int a, long long int b);
    long long int maximum(long long int a, long long int b);
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long long int sum[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
     sum[0] = summation(b,c,d,e);
     sum[1] = summation(c,d,e,a);
     sum[2] = summation(d,e,a,b);
     sum[3] = summation(e,a,b,c);
    sum[4] = summation(a,b,c,d);
    long long int min,max;
    min = sum[0];
    max = sum[0];
    for(int i = 1; i<=4;i++){
        min = minimum(min,sum[i]);
        max = maximum(max,sum[i]);
    }
    printf("%lld %lld",min,max);
    
    return 0;
}

long long int summation(long int a, long int b, long int c,long int d){
    long long long_sum = a + b + c + d;
    return long_sum;
}

long long int minimum(long long int a, long long int b){
    return (a<b)?a:b;
}

long long int maximum(long long int a, long long int b){
    return (a>b)?a:b;
}
