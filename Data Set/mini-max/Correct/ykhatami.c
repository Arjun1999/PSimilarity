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
    
    long long int arr[5] = {a, b, c, d, e};
    long long int min = 2e9, max=0, sum=0;
    for (int i =0; i<5; i++){
        if (arr[i]<min) min = arr[i];
        if (arr[i]>max) max = arr[i];
        sum += arr[i];
    }
    printf("%lld %lld",sum-max, sum-min);
    return 0;
}
