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
    long int e,min,max,sum1,sum2;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
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
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    sum1=a+b+c+d+e-min;
    sum2=a+b+c+d+e-max;
    printf("%ld ",sum2);
    printf("%ld",sum1);
    return 0;
}
