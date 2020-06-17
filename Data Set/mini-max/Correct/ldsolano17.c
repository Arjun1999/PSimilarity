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
    long long int min = LLONG_MAX;
    long long int max = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    for (int i = 0; i < 5; i++) {
        long long int sum = 0;
        sum = ((i != 0) ? a : 0) + ((i != 1) ? b : 0) + ((i != 2) ? c : 0) + ((i != 3) ? d : 0) + ((i != 4) ? e : 0);
        min = (sum < min) ? sum : min;
        max = (sum > max) ? sum : max;
    }
    printf("%lld %lld", min, max);
    return 0;
}
