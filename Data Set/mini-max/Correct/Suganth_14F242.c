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
    long int max,min;
    if(a>b&&a>c&&a>d&&a>e)
        max = a;
    else if(b>c&&b>d&&b>e)
        max = b;
        else if(c>d&&c>e)
        max = c;
        else if(d>e)
        max = d;
        else 
        max = e;
    if(a<b&&a<c&&a<d&&a<e)
        min = a;
    else if(b<c&&b<d&&b<e)
        min = b;
        else if(c<d&&c<e)
        min = c;
        else if(d<e)
        min = d;
        else 
        min = e;
        long int sum = a+b+c+d+e;
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
