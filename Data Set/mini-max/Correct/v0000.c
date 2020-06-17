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
    long int min = 1000000001, max = 0;
    long long int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        sum += a[i];
    }
    printf("%lld %lld\n", sum - max, sum - min);
    return 0;
}
