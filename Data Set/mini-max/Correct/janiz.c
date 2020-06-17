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
    
    long long int arr[5] = { a, b, c, d, e };
    long long int min = arr[0];
    long long int max = arr[0];
    int maxp = 0, minp = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxp = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minp = i;
        }
    }
    min = 0;
    max = 0;
    for (int i = 0; i < 5; i++) {
        if (i != minp) max+= arr[i];
        if (i != maxp) min+= arr[i];
    }
    printf("%lld %lld\n", min, max);
    
    
    return 0;
}
