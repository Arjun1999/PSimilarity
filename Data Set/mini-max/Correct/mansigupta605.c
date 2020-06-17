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
    long int m=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int max=a+b+c+d;
    long int min=a+b+c+d;
    m=b+c+d+e;
    if(max<m)
        max=m;
    if(min>m)
        min=m;
    m=a+c+d+e;
    if(max<m)
        max=m;
    if(min>m)
        min=m;
    m=a+b+d+e;
     if(max<m)
        max=m;
    if(min>m)
        min=m;
    m=a+b+c+e;
     if(max<m)
        max=m;
    if(min>m)
        min=m;
    printf("%ld %ld",min,max);
    return 0;
}
