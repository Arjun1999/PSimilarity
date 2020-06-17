#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);

    long long int max, min;

    min=a[0];
    max=a[0];
    long long int sum=a[0];

    for (short i=1; i < 5; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }

    printf("%lld ", sum-max);
    printf("%lld", sum-min);
    return 0;
}
