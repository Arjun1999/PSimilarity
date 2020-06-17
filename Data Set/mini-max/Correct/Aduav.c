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
    long int f;
    long int g;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

    if(a==b&&a==c&&a==d&&a==e)
      {  
        f=a+b+c+d;
        printf("%lld",f);
        printf(" ");
        g=f; 
        printf("%lld",g);
      } 
    
    if(a>b&&a>c&&a>d&&a>e)
    {
        g=b+c+d+e;
        printf("%lld",g);
    }
    else if(b>a&&b>c&&b>d&&b>e)
    {
        g=a+c+d+e;
        printf("%lld",g);
    }
    else if(c>a&&c>b&&c>d&&c>e)
    {
        g=a+b+d+e;
        printf("%lld",g);
    }
    else if(d>a&&d>b&&d>c&&d>e)
    {
        g=a+b+c+e;
        printf("%lld",g);
    }
    else if(e>a&&e>b&&e>c&&e>d)
    {
        g=a+b+c+d;
        printf("%lld",g);
    }
    
    printf(" ");
        
    if(a<b&&a<c&&a<d&&a<e)
    {
        f=b+c+d+e;
        printf("%lld",f);
    }    
    else if(b<a&&b<c&&b<d&&b<e)
    {
        f=a+c+d+e;
        printf("%lld",f);
    }
    else if(c<a&&c<b&&c<d&&c<e)
    {
        f=b+a+d+e;
        printf("%lld",f);
    }
    else if(d<a&&d<b&&d<c&&d<e)
    {
        f=b+c+a+e;
        printf("%lld",f);
    }
    else if(e<a&&e<b&&e<c&&e<d)
    {
        f=b+c+d+a;
        printf("%lld",f);
    }
        
    return 0;
}
