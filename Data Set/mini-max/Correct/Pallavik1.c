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
    long int max,min;
    long int max_sum,min_sum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if(a<b && a<c && a<d && a<e)
        {
        min=a;
        max_sum=b+c+d+e;
        
    }
    else if(b<a && b<c && b<d && b<e)
        {
        min=b;
        max_sum=a+c+d+e;
    }else if(c<a && c<b && c<d && c<e)
        {
        min=c;
        max_sum=a+b+d+e;
    }
        else if(d<a && d<b && d<c && d<e)
            {
        min=d;
        max_sum=a+c+b+e;
    }
        else
            {
         min=e;
         max_sum=a+c+d+b;
    }
    if(a>b && a>c && a>d && a>e)
        {
        max=a;
        min_sum=b+c+d+e;
    }
        else if (b>a && b>c && b>d && b>e)
            {
        max=b;
        min_sum=a+c+d+e;
    }
        else if (c>a && c>b && c>d && c>e)
            {
        max=c;
        min_sum=b+a+d+e;
    }
        else if(d>a && d>b && d>c && d>e)
            {
        max=d;
        min_sum=b+c+a+e;
    }    
        else 
            {
         max=e;
         min_sum=b+c+d+a;
    }
        
       printf("%lld %lld",min_sum,max_sum); 
    
    return 0;
}
