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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long long int min = a, max = a, minsum = 0, maxsum = 0;
    if (b < min) {
        minsum += min;
        min = b;
    } else {
        minsum += b;
    }
    if (b > max) {
        maxsum += max;
        max = b;
    } else {
        maxsum += b;
    }
    if (c < min) {
        minsum += min;
        min = c;
    } else {
        minsum += c;
    }
    if (c > max) {
        maxsum += max;
        max = c;
    } else {
        maxsum += c;
    }
    if (d < min) {
        minsum += min;
        min = d;
    } else {
        minsum += d;
    }
    if (d > max) {
        maxsum += max;
        max = d;
    } else {
        maxsum += d;
    }
    if (e < min) {
        minsum += min;
        min = e;
    } else {
        minsum += e;
    }
    if (e > max) {
        maxsum += max;
        max = e;
    } else {
        maxsum += e;
    }
    printf("%lld %lld", maxsum, minsum);
    return 0;
}
