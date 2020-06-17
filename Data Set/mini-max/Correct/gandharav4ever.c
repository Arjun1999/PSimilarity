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
    long int min=0,max=0,sum=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min = (a < b)?a:b;
    min = (min < c)?min:c;
    min = (min < d)?min:d;
    min = (min < e)?min:e;
    max = (a > b)?a:b;
    max = (max > c)?max:c;
    max = (max > d)?max:d;
    max = (max > e)?max:e;
    /*printf("min=%lld max=%lld",min,max);*/
    sum = a+b+c+d+e;
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
