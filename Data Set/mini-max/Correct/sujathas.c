#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void mini_max(long int a, long int b, long int c, long int d, long int e) {
    long long int min = 0, max = 0;
    
    long long int sum = a+b+c+d;
    min = sum; max = sum;
    update_min_max(sum += e - a, &min, &max); // b + c + d + e
    update_min_max(sum +=  a - b, &min, &max); // a + c + d + e
    update_min_max(sum += b - c, &min, &max); // a + b + d + e
    update_min_max(sum += c - d, &min, &max); // a + b + c + e
    printf("%lld %lld", min, max);
}

void update_min_max(long long int sum, long long int *min, long long int *max) {
    if(sum < *min)
        *min = sum;
    else if (sum > *max)
        *max = sum;
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    mini_max(a, b, c, d, e);
    return 0;
}
