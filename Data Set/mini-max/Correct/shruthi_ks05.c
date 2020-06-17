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
    long long int mi, ma, sum1, sum2, sum3, sum4, sum5;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);

    sum1 = a + b + c + d;
    sum2 = b + c + d + e;
    sum3 = c + d + e + a;
    sum4 = d + e + a + b;
    sum5 = e + a + b + c;

    mi = sum1<sum2?sum1:sum2;
    mi = mi<sum3?mi:sum3;
    mi = mi<sum4?mi:sum4;
    mi = mi<sum5?mi:sum5;

    ma = sum1>sum2?sum1:sum2;
    ma = ma>sum3?ma:sum3;
    ma = ma>sum4?ma:sum4;
    ma = ma>sum5?ma:sum5;

    printf("%lld %lld", mi, ma);

    return 0;
}
