#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a; 
    long long b; 
    long long c; 
    long long d;
    long long e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long min = LONG_MAX;
    long long max = LONG_MIN;
    long long total = 0;
    long long arr[] = {a, b, c, d, e};
    int size = 5;
    for(int i=0; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        total += arr[i];
    }
    printf("%lld %lld", total-max, total-min);
    return 0;
}
