#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long long sum = 0LL;
    for(int i=0;i<5;i++) {
        scanf("%ld", &a[i]);
        sum += a[i];
    }
    long long min = LONG_MAX;
    long long max = 0LL;
    for(int i=0;i<5;i++) {
        if(min > sum - a[i]) min = sum - a[i];
        if(max < sum - a[i]) max = sum - a[i];
    }
    printf("%lld %lld\n", min, max);
    return 0;
}
