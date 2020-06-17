#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long int min;
    long int max;
    long int sum;
    int i;

    scanf("%lld %lld %lld %lld %lld",a,a+1,a+2,a+3,a+4);
    min = 10e9;
    max = 0;
    sum = 0;
    for (i = 0;i < 5;i++){
        sum += a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
