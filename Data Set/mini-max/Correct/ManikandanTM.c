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
    long int max=a,min=a;
    long int sum = a + b + c + d + e;
    if(b>max)
        max=b;
    if(b<min)
        min=b;
    if(c>max)
        max=c;
    if(c<min)
        min=c;
    if(d>max)
        max=d;
    if(d<min)
        min=d;
    if(e>max)
        max=e;
    if(e<min)
        min=e;
    printf("%ld ",sum-max);
    printf("%ld",sum-min);
    return 0;
}
