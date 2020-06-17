#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int arr[5], sum = 0;
    //scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    int i;
    for(i = 0; i < 5; i++) {
        scanf("%lld",&a);
        arr[i] = a;
        sum+= a;
    }
    long long int max, min;
    max = arr[0];
    min = arr[0];
    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%lld %lld", sum-max, sum-min);
    return 0;
}
