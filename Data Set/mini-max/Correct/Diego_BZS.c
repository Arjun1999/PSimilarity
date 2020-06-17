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
    
    long long int maxNumber = 0;
    long long int minNumber = 0;
    int maxP = 0;
    int minP = 0;
    
    int n = 5;
    long long int arr[5] = {a,b,c,d,e};
    for (int i = 0; i < n; i++) {
        if (maxNumber <= arr[i]) {
            maxNumber = arr[i];
            maxP = i;
        }
        if (minNumber == 0 || minNumber >= arr[i]) {
            minNumber = arr[i];
            minP = i;
        }
    }
    long long int maxSum = 0;
    long long int minSum = 0;
    for (int i = 0; i < n; i++) {
        if (i != minP) {
            maxSum += arr[i];
        }
        if (i != maxP) {
            minSum += arr[i];
        }
    }
    
    printf("%lld %lld", minSum, maxSum);
    return 0;
}
