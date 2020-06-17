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
    long long int max = 0, min = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if (a <= b && a <= c && a <= d && a <= e) min = a;
    if (b <= a && b <= c && b <= d && b <= e) min = b;
    if (c <= a && c <= b && c <= d && c <= e) min = c;
    if (d <= a && d <= b && d <= c && d <= e) min = d;
    if (e <= a && e <= b && e <= c && e <= d) min = e;
    
    if (a >= b && a >= c && a >= d && a >= e) max = a;
    if (b >= a && b >= c && b >= d && b >= e) max = b;
    if (c >= a && c >= b && c >= d && c >= e) max = c;
    if (d >= a && d >= b && d >= c && d >= e) max = d;
    if (e >= a && e >= b && e >= c && e >= d) max = e;
    
    printf("%lld %lld", a+b+c+d+e-max, a+b+c+d+e-min);
    return 0;
}
