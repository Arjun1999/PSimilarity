#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int max(long int,long int);
long int min(long int, long int);

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int maximum,minimum;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
 minimum = (long int)min(e,(long int)min(min(a,b),min(c,d))) ;
maximum = (long int)max(e,(long int)max(max(a,b),max(c,d))) ; 
    printf("%ld %ld",(a+b+c+d+e-maximum),(a+b+c+d+e-minimum));
    return 0;
}
long int max(long int x,long int y)
    {
    if(x>y)
        return x;
    else if(y>x)
        return y;
        else 
        return x;
        
}
long int min(long int x,long int y)
    {
    if(x<y)
        return x;
    else if(y<x)
        return y;
        else 
        return x;
        
}
