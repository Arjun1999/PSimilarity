#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a, b, c, d, e, sum[5], min, max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0] = b + c + d + e;
    sum[1] = a + c + d + e;
    sum[2] = b + a + d + e;
    sum[3] = b + c + a + e;
    sum[4] = b + c + d + a;
    min = sum[1];
    max = sum[1];
    for(int i=0; i<5; i++){
        if(sum[i] < min)
            min = sum[i];
        if(sum[i] > max)
            max = sum[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
