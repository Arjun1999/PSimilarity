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
    long long int min, max, sum;
    min = 1000000000000l;
    max = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum = (long long int)b + c + d + e;
    if (sum < min) min = sum;
    if (sum > max) max = sum;
    sum = (long long int)a + c + d + e;
    if (sum < min) min = sum;
    if (sum > max) max = sum;
    sum = (long long int)a + b + d + e;
    if (sum < min) min = sum;
    if (sum > max) max = sum;
    sum = (long long int)a + b + c + e;
    if (sum < min) min = sum;
    if (sum > max) max = sum;
    sum = (long long int)a + b + c + d;
    if (sum < min) min = sum;
    if (sum > max) max = sum;
    printf("%lld %lld\n", min, max);
    return 0;
}
