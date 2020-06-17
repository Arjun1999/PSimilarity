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
    long long max,min;
    long long sum=0;
    min = max = a+b+c+d;
    sum = a+b+c+e;
    if(sum < min) min = sum;
    if(sum > max) max = sum;
    sum = a+b+d+e;
    if(sum < min) min = sum;
    if(sum > max) max = sum;
    sum = a+d+c+e;
    if(sum < min) min = sum;
    if(sum > max) max = sum;
    sum = d+b+c+e;
    if(sum < min) min = sum;
    if(sum > max) max = sum;
    printf("%lld %lld",min,max);
    return 0;
}
