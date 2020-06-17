#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int max(long long int a, long long int b) {
    return a>b?a:b;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int biggest = (a>b?a>c?a>d?a>e?a:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e:b>c?b>d?b>e?b:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e);
    long long int smallest = (a<b?a<c?a<d?a<e?a:e:d<e?d:e:c<d?c<e?c:e:d<e?d:e:b<c?b<d?b<e?b:e:d<e?d:e:c<d?c<e?c:e:d<e?d:e);
    printf("%lld %lld", (a+b+c+d+e)-biggest, (a+b+c+d+e)-smallest);
    
    return 0;
}
