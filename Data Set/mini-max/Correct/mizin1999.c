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
    
    long int max;
    long int min;
    long int max1;
    long int min1;
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    if(a>=b && a>=c && a>=d && a>=e) max=a;
    if (a<=b && a<=c && a<=d && a<=e) min=a;
    if(b>=a && b>=c && b>=d && b>=e) max=b;
    if (b<=a && b<=c && b<=d && b<=e) min=b;
    if(c>=a && c>=b && c>=d && c>=e) max=c;
    if (c<=a && c<=b && c<=d && c<=e) min=c;
    if(d>=a && d>=b && d>=c && d>=e) max=d;
    if (d<=a && d<=b && d<=c && d<=e) min=d;
    if (e>=a && e>=b && e>=c && e>=d) max=e;
    if (e<=a && e<=b && e<=c && e<=d) min=e;
        min1 =(a+b+c+d+e)-max;
        printf("%ld ", min1 );
        max1 =(a+b+c+d+e)-min;
        printf("%ld ", max1 );
    return 0;
}