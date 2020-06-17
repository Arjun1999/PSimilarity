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
    long int sa;
    long int sb;
    long int sc;
    long int sd;
    long int se;
    long int max;
    long int min;
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    sa = b+c+d+e;
    sb = a+c+d+e;
    sc = a+b+d+e;
    sd = a+b+c+e;
    se = a+b+c+d;
    
    if(sa > sb)
    {
        max = sa;
        min = sb;
    }
    else
    {
        max = sb;
        min = sa;
    }
    
    if(sc > max)
    {
        max = sc;        
    }
    
    if(sc < min)
    {
        min = sc;
    }
    
    if(sd > max)
    {
        max = sd;        
    }
    
    if(sd < min)
    {
        min = sd;
    }
    
    if(se > max)
    {
        max = se;        
    }
    
    if(se < min)
    {
        min = se;
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
