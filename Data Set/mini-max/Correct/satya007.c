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
    long int s[5];
    s[0]=a+b+c+d;
    s[1]=b+c+d+e;
    s[2]=a+c+d+e;
    s[3]=a+b+d+e;
    s[4]=a+b+c+d;
    long int min=s[0],max=s[0];
    if(a>b&&a>c&&a>d&&a>e)
        min=b+c+d+e;
     if(b>a&&b>c&&b>d&&b>e)
        min=a+c+d+e;
     if(c>b&&c>a&&c>d&&c>e)
        min=b+a+d+e;
     if(d>b&&d>c&&d>a&&d>e)
        min=b+c+a+e;
     if(e>b&&e>c&&e>d&&e>a)
        min=b+c+d+a;
    
     if(a<b&&a<c&&a<d&&a<e)
        max=b+c+d+e;
     if(b<a&&b<c&&b<d&&b<e)
        max=a+c+d+e;
     if(c<b&&c<a&&c<d&&c<e)
        max=b+a+d+e;
     if(d<b&&d<c&&d<a&&d<e)
        max=b+c+a+e;
     if(e<b&&e<c&&e<d&&e<a)
        max=b+c+d+a;
   printf("%ld %ld",min,max);
    return 0;
}

