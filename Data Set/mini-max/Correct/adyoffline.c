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
    long int min= ((a<b?a:b)<(c<d?c:d)?(a<b?a:b):(c<d?c:d))<e? ((a<b?a:b)<(c<d?c:d)?(a<b?a:b):(c<d?c:d)):e;
    long int max= ((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d))>e? ((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d)):e;
    printf("%ld %ld",a+b+c+d+e-max,a+b+c+d+e-min);
    return 0;
}
