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
    long int sum[5];
    long int sum_max = 0;
    long int sum_min = 0;

    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0] = a + b + c + d;
    sum[1] = e + b + c + d;
    sum[2] = e + a + c + d;
    sum[3] = e + a + b + d;
    sum[4] = a + b + c + e;

    sum_max = sum[0];
    sum_min = sum[0];
    for (int i = 0 ; i < 5; i++) {
        if (sum[i] >sum_max ) {
            sum_max = sum[i];
        }
        if (sum[i] < sum_min) {
            sum_min = sum[i];
        }
    }
    printf("%ld %ld\n", sum_min, sum_max);
    return 0;
}
