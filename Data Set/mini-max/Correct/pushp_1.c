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
    long int min;
    long int max;
    int i;
    long int sum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=a;
    max=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min>d)
        min=d;
    if(min>e)
        min=e;
    min=sum-min;
    
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    max=sum-max;
    
    printf("%ld %ld",max,min);
    return 0;
}
