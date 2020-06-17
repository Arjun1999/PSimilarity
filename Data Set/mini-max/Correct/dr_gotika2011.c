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
    long int min=LONG_MAX, max=LONG_MIN;
    long int sum=0;
    scanf("%ld" ,&a);
    if(a<min){
        min=a;
    }
    if(a>max){
        max=a;
    }
    sum+=a;
    scanf("%ld" ,&b); 
if(b<min){ 
min=b; 
} 
if(b>max){ 
max=b; 
} 
sum+=b; 
    scanf("%ld" ,&c); 
if(c<min){ 
min=c; 
} 
if(c>max){ 
max=c; 
} 
sum+=c; 
    scanf("%ld" ,&d); 
if(d<min){ 
min=d; 
} 
if(d>max){ 
max=d; 
} 
sum+=d; 
    scanf("%ld" ,&e); 
if(e<min){ 
min=e; 
} 
if(e>max){ 
max=e; 
} 
sum+=e; 
   
    
        
    
 
    printf ("%ld %ld",(sum-max) ,(sum-min));
    return 0;
}
