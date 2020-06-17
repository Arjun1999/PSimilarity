#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5] = { 0LL, 0LL, 0LL, 0LL, 0LL };
    long long sum = 0LL;
    long long min = 0LL;
    long long max = 0LL;
    int n = 5;
    int i = 0;
    for ( i = 0; i < n; i++ ) {
        scanf("%lld", &a[i] );
        sum += a[i];
        if ( a[i] < min || i == 0 ) min = a[i];
        if ( a[i] > max || i == 0 ) max = a[i];
    }
    printf("%lld %lld", (sum - max), (sum - min) );
    return 0;
}
