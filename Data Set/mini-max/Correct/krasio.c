#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a [5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    int i;
    long long min, max, sum, sumin, sumax;
    min = INT_MAX;
    max = 0;
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (min > a[i]) min = a[i];
        if (max < a[i]) max = a[i];
        sum = sum + a[i];
    }
    sumin = sum - max;
    sumax = sum - min;
    printf("%lld %lld", sumin, sumax);
    return 0;
}
