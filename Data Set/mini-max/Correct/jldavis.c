#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5]; 
    int i;
    long long min = 10000000000;
    long long max = -10000000000;
    long long sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for (i=0; i<5; i++)
    {
        sum += a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf ("%lld %lld\n", sum-max, sum-min);
    return 0;
}
