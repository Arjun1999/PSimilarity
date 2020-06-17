#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,max=0,min=100000,sum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   sum=a+b+c+d+e;
    if(a>b&&a>c&&a>d&&a>e)
        max=a;
    else if(b>a&&b>c&&b>d&&b>e)
        max=b;
        else if(c>a&&c>b&&c>d&&c>e)
        max=c;
        else if(d>a&&d>c&&d>b&&d>e)
        max=d;
        else
        max=e;
        
        if(a<b&&a<c&&a<d&&a<e)
        min=a;
    else if(b<a&&b<c&&b<d&&b<e)
        min=b;
        else if(c<a&&c<b&&c<d&&c<e)
        min=c;
        else if(d<a&&d<c&&d<b&&d<e)
        min=d;
        else
        min=e; 
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
