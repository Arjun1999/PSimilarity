#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum[5], min, max;
    long long int a[5]; 
    for (int i = 0; i < 5; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < 5; i++) {
        sum[i] = 0;
        for (int j = 0; j < 5; j++) {
            if (j != i)
                sum[i] = sum[i] + a[j];
        }
    }
    min = sum[0];
    max = sum[0];
    for (int i = 1; i < 5; i++) {
        if (sum[i] > max) 
            max = sum[i];
        if (sum[i] < min)
            min = sum[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
