#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,min , max; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long long sum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=a;
    max=e;
    if(b<a&&b<c&&b<d&&b<e)
        min=b;
        else if(c<a&&c<b&&c<d&&c<e)
        min=c;
        else if(d<a&&d<b&&d<c&&d<e)
        min=d;
        else if(e<a&&e<b&&e<c&&e<d)
        min=e;
    if(d>a&&d>b&&d>c&&d>e)
            max=d;
         else if(c>a&&c>b&&c>d&&c>e)
            max=c;
            else if(b>a&&b>c&&b>d&&b>e)
            max=b;
            else if(a>b&&a>c&&a>d&&a>e)
            max=a;
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
