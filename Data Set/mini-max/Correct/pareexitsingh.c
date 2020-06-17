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
    long long int v,w,x,y,z,sum,max,min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    v=b+c+d+e;
    w=a+c+d+e;
    x=a+b+d+e;
    y=a+b+c+e;
    z=a+b+c+d;
    sum=a+b+c+d+e;
    if(a>b)
            {
                if(a>c)
                        max=a;
                else
                        max=c;
            if(b>c)
                    min=c;
            else
                    min =b;
    }
    else{
        if(b>c)
                max=b;
        else
              max=c;
        if(a>c)
                min=c;
        else
                min=a;
    }
    if(max>d){
        if(max>e)
                max=max;
        else
                max=e;
        if(min>e)
                min=e;
        if(min>d)
                min=d;
        
    }
    else{
        if(d>e)
                max=d;
        else
                max=e;
        if(min>e)
                min=e;
        if(min>d)
                min=d;
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
   