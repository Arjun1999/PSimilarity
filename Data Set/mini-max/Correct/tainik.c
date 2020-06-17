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
    long long int min = a;
    long long int max = a;
    long long int sum = a;
    if(min > b) min = b;
    if(max < b) max = b;
    sum+=b;
    if(min > c) min = c;
    if(max < c) max = c;
    sum+=c;
    if(min > d) min = d;
    if(max < d) max = d;
    sum+=d;
    if(min > e) min = e;
    if(max < e) max = e;
    sum+=e;
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
