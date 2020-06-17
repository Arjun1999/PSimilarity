#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int fnmax(long int a, long int b, long int c, long int d, long int e) {
    if(a >= b && a >= c && a >= d && a>=e)
        return a;
    if(b >= a && b >= c && b >= d && b >= e)
        return b;
    if(c >= a && c >= b && c >= d && c >= e)
        return c;
    if(d >= a && d >= c && d >= b && d >= e)
        return d;
    if(e >= a && e >= c && e >= b && e >= d)
        return e;
    return 0;
}
long int fnmin(long int a, long int b, long int c, long int d, long int e) {
     if(a <= b && a <= c && a <= d && a<=e)
        return a;
    if(b <= a && b <= c && b <= d && b <= e)
        return b;
    if(c <= a && c <= b && c <= d && c <= e)
        return c;
    if(d <= a && d <= c && d <= b && d <= e)
        return d;
    if(e <= a && e <= c && e <= b && e <= d)
        return e;
    return 0;
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max;
    long int min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    max = a+b+c+d+e - fnmin(a,b,c,d,e);
    min = a+b+c+d+e - fnmax(a,b,c,d,e);
    
    printf("%ld %ld", min, max);
    return 0;
}
