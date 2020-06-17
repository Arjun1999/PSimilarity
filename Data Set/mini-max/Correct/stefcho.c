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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int arr[] = {a, b, c, d, e};
    long long int sum, max = 0, min = 9999999999;
    for(int i = 0; i < 5; ++i) {
        sum = 0;
        for(int j = 0; j < 5; ++j) {
            if(i == j) continue;
            sum += arr[j];
        }
        if(sum > max) max = sum;
        if(sum < min) min = sum;
    }
    
    printf("%lld %lld", min, max);
    return 0;
}
