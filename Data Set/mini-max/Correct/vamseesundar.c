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
    unsigned  long int sum_a = b+c+d+e;
    unsigned  long int sum_b = a+c+d+e;
    unsigned  long int sum_c = a+b+d+e;
    unsigned  long int sum_d = a+b+c+e;
    unsigned  long int sum_e = a+b+c+d;
    unsigned  long int max,min;
    
    max = sum_a;
    if(sum_b > max)
        {max = sum_b;}
     if(sum_c>max)
        {max=sum_c;}
     if(sum_d>max)
        {max=sum_d;}
     if(sum_e>max)
        {max=sum_e;}
    
     min = sum_a;
    if(sum_b < min)
        {min = sum_b;}
     if(sum_c < min)
        {min=sum_c;}
     if(sum_d < min)
        {min=sum_d;}
     if(sum_e  < min)
        {min=sum_e;}
    printf("%lu %lu",min,max);
    return 0;
}
