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
    long int min=a+b+c+d, max=a+b+c+d;
    if(a+b+c+d>max)
        max=a+b+c+d;
    if(b+c+d+e>max)
        max=b+c+d+e;
    if(a+b+c+e>max)
        max=a+b+c+e;
    if(a+b+d+e>max)
        max=a+b+d+e;
    if(a+c+d+e>max)
        max=a+c+d+e;
    if(a+b+c+d<min)
        min=a+b+c+d;
    if(b+c+d+e<min)
        min=b+c+d+e;
    if(a+b+c+e<min)
        min=a+b+c+e;
    if(a+b+d+e<min)
        min=a+b+d+e;
    if(a+c+d+e<min)
        min=a+c+d+e;
    printf("%ld %ld",min,max);
    return 0;
}
