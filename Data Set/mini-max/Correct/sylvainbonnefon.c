#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int    a; 
    long long int    b; 
    long long int    c; 
    long long int    d;
    long long int    e;
    long long int   swp;
    long long int   min;
    long long int   max;
    int             i;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    i = 0;
    while (i < 5)
    {
        swp = 0;
        if (i == 0 && a > b)
        {
            swp = a;
            a = b;
            b = swp;
            i = 0;
        }
        else if (i == 1 && b > c)
        {
            swp = b;
            b = c;
            c = swp;
            i = 0;
        }
        else if (i == 2 && c > d)
        {
            swp = c;
            c = d;
            d = swp;
            i = 0;
        }
        else if (i == 3 && d > e)
        {
            swp = d;
            d = e;
            e = swp;
            i = 0;
        }
        else
            i++;
    }
    min = a + b + c + d;
    max = b + c + d + e;
    printf("%lld %lld", min, max);
    return 0;
}
