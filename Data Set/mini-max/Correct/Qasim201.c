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
    long int min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
       min=a;max=a;
    if(min>b)
       min=b;
    else if(max<b)
        max=b;
    
    if(min>c)
       min=c;
    else if(max<c)
       max=c;
    
    if(min>d)
       min=d;
    else if(max<d)
        max=d;
    
    if(min>e)
       min=e;
    else if(max<e)
        max=e;
    long int aa=min;    
    min=a+b+c+d+e-max;
    max=a+b+c+d+e-aa;
     printf("%ld %ld",min,max);   
        
    return 0;
}
