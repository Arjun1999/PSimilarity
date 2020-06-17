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
    long int max=0,min=9999999999,sum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   if(a+b+c+d> max)max=a+b+c+d;      if(a+b+c+e> max)max=a+b+c+e;
    if(a+b+e+d> max)max=a+b+e+d;      if(a+e+c+d> max)max=a+e+c+d;
    if(e+b+c+d> max)max=e+b+c+d;
    
    if(a+b+c+d < min)min=a+b+c+d;      if(a+b+c+e < min)min=a+b+c+e;
    if(a+b+e+d < min)min=a+b+e+d;      if(a+e+c+d < min)min=a+e+c+d;
    if(e+b+c+d < min)min=e+b+c+d;
    
    printf("%lld %lld",min,max);
    
    
    
    
    
    
    
    
    return 0;
}
