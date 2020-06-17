#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define MAX 5

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int arr[MAX];
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    long long int min=LONG_MAX;
    long long int max=LONG_MIN;
    
    for(int i=0; i<MAX; ++i) {
       long long int sum=0;
        for(int k=0; k<MAX; ++k) {
            if(k==i) continue;
            sum += arr[k];
        }
        min = sum < min ? sum : min;
        max = sum > max ? sum : max;
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
