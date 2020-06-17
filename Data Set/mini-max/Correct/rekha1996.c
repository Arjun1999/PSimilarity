#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int total=a + b + c + d + e;
    long long int min= total;
    long long int max= 0;
    max= total - a;
    min= total - a;
    if(total -b > max)
        max= total - b;
    if(total - b < min)
        min=total-b;
    if(total - c > max)
        max= total - c;
    if(total - c < min)
        min= total - c;
    if(total - d > max)
        max= total - d;
    if(total - d < min)
        min= total - d;
    if(total - e > max)
        max= total - e;
    if(total - e < min)
        min= total - e; 
    printf("%lld %lld", min , max);
    return 0;
}
