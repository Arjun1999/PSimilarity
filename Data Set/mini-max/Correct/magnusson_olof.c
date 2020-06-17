#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int arr[5] = {a,b,c,d,e};
    
    long int low = INT_MAX;
    long int hi = INT_MIN;
    long int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] < low) low = arr[i];
        if (arr[i] > hi) hi = arr[i];
    }
    
    printf("%li %li", sum - hi, sum - low);
    
    return 0;
}
