#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int findMin(long int a, long int b, long int c, long int d, long int e){
    long int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    if (e < min) {
        min = e;
    }
    return min;
}

long int findMax(long int a, long int b, long int c, long int d, long int e){
    long int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    if (e > max) {
        max = e;
    }
    return max;
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int min; long int max;
    min = findMin(a,b,c,d,e);
    max = findMax(a,b,c,d,e);
    printf("%lld %lld", a+b+c+d+e-max, a+b+c+d+e-min);
    return 0;
}
