#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long sum(long long *vars, int size);
long long minSum(long long *vars, long long sum, int size);
long long maxSum(long long *vars, long long sum, int size);

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long vars[5] = {a, b, c, d, e};
    long long total = sum(vars, 5);
    printf("%lld ", minSum(vars, total, 5));
    printf("%lld", maxSum(vars, total, 5));

    return 0;
}

long long sum(long long *vars, int size)
{
    long long total=0;
    int i;
    for (i=0; i<size; ++i) {
        total += vars[i];
    }
    return total;
}
long long minSum(long long *vars, long long total, int size)
{
    long long min=total;
    int i;
    for(i=0;i<size;++i) {
        if(total-vars[i] < min) {
            min = total-vars[i];
        }
    }
    return min;
}
long long maxSum(long long *vars, long long total, int size)
{
    long long max=0;
        int i;
    for(i=0;i<size;++i) {
        if(total-vars[i] > max) {
            max = total-vars[i];
        }
    }
    return max;
}