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
    long long int vet[5];
    long long int min = LLONG_MAX;
    long long int max = 0;
    int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    vet[0] = b + c + d + e;
    vet[1] = a + c + d + e;
    vet[2] = a + b + d + e;
    vet[3] = a + b + c + e;
    vet[4] = a + b + c + d;
    for (i=0;i<5;i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
        if (vet[i] < min) {
            min = vet[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}
