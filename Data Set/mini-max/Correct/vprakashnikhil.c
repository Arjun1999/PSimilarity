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
    long long int unsigned sum1, sum2, sum3, sum4, sum5;
    sum1 = b + c + d + e;
    sum2 = a + b + c + d;
    sum3 = a + b + c + e;
    sum4 = a + c + d + e;
    sum5 = a + b + d + e;
    long long int min = 9223372036854775807 , max = 0;
    long long int array[6];
    array[0] = sum1;
    array[1] = sum2;
    array[2] = sum3;
    array[3] = sum4;
    array[4] = sum5;
    for (int i = 0; i<5; i++) {
        if( array[i] > max)
            max = array[i];
    }
    for (int i = 0; i<5; i++) {
        if( array[i] < min)
            min = array[i];
    }
    printf("%llu %llu", min, max);
    return 0;
}
