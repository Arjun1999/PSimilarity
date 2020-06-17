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
    long int e,min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min=a+b+c+d;
    max=b+c+d+e;
    if(min>a+b+c+e)
        min=a+b+c+e;
    if(min>a+b+d+e)
        min=a+b+d+e;
    if(min>a+c+d+e)
        min=a+c+d+e;
    if(min>b+c+d+e)
        min=b+c+d+e;
    if(max<a+b+c+e)
        max=a+b+c+e;
    if(max<a+b+d+e)
        max=a+b+d+e;
    if(max<a+c+d+e)
        max=a+c+d+e;
    if(max<a+b+c+d)
        max=a+b+c+d;
    printf("%ld %ld",min,max);
    
    
    return 0;
}
