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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int min;
    long int sum1 = 0;
    long int sum2 = 0;
    if (a <= b && a <= c && a <= d && a <= e) sum2 = b+c+d+e;
    if (a >= b && a >= c && a >= d && a >= e) sum1 = b+c+d+e;
    if (b <= a && b <= c && b <= d && b <= e) sum2 = a+c+d+e;
    if (b >= a && b >= c && b >= d && b >= e) sum1 = a+c+d+e;
    if (c <= b && c <= a && c <= d && c <= e) sum2 = a+b+d+e;
    if (c >= b && c >= a && c >= d && c >= e) sum1 = a+b+d+e;
    if (d <= b && d <= c && d <= a && d <= e) sum2 = a+b+c+e;
    if (d >= b && d >= c && d >= a && d >= e) sum1 = a+b+c+e;
    if (e <= b && e <= c && e <= d && e <= a) sum2 = a+b+c+d;
    if (e >= b && e >= c && e >= d && e >= a) sum1 = a+b+c+d;
    
    printf("%ld %ld\n", sum1, sum2);
    return 0;
}
