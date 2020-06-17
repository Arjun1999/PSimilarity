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
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    vet[0] = a+b+c+d;
    vet[1] = b+c+d+e;
    vet[2] = a+c+d+e;
    vet[3] = a+b+d+e;
    vet[4] = a+b+c+e;
    
    long long int biggest= 0;
    long long int minor = 8888888888;
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] > biggest)
            biggest = vet[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] < minor)
            minor = vet[i];
    }
    printf("%lld %lld", minor, biggest);
    
    return 0;
}
