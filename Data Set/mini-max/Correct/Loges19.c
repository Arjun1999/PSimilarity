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
    long int e,smax=0,smin=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    smax=a+b+c+d;
    smin=a+b+c+d;
    if((a+b+c+e)>=smax)
        {
        smax=a+b+c+e; 
        }
    if((a+b+c+e)<=smin)
            smin=(a+b+c+e);
    if((b+c+d+e)>=smax)
        smax=c+b+d+e;
      if((b+c+d+e)<=smin)
            smin=(b+c+d+e);
      if((a+c+d+e)>=smax)
            smax=a+d+c+e;
      if((a+c+d+e)<=smin)
            smin=(a+c+d+e);
      if((a+b+d+e)>=smax) 
                smax=a+b+d+e;            
      if((a+b+d+e)<=smin)
            smin=(a+b+d+e);
     printf("%ld %ld",smin,smax);
    return 0;
}
