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
    long int c,summin,summax,max; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
        summin=a+b+c+d+e-max;
    max=a;
    if(b<max)
        max=b;
    if(c<max)
        max=c;
    if(d<max)
        max=d;
    if(e<max)
        max=e;
        summax=a+b+c+d+e-max;
        printf("%ld %ld",summin,summax);
        
        
    return 0;
}
