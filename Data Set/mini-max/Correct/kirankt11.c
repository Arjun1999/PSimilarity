#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int i, min, max;
    unsigned long long min_cnt = 0, max_cnt = 0, sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int arr[] = {a, b, c, d, e};
    sum = min = max = arr[0];
    for (i=1; i<5; i++){
        if (arr[i] < min)
                min = arr[i];
        if (arr[i] > max)
                max = arr[i];
        sum += arr[i];
    }
    min_cnt = sum - max;
    max_cnt = sum - min;
    printf ("%lld %lld", min_cnt, max_cnt);
    return 0;
}
