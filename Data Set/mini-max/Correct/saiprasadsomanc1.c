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
    long int s1 =0,s2 = 0,s3 = 0,s4 = 0 ,s5 = 0;
    long int min = 0, max = 0;
    s1 = a+b+c+d;
    s2 = b+c+d+e;
    s3 = c+d+e+a;
    s4 = d+e+a+b;
    s5 = e+a+b+c;
    min  = s1;
    max  = s1;
    if(min > s2)
        min = s2;
    if ( max < s2 )
        max = s2;
    if (min > s3 )
        min = s3;
    if ( max < s3)
        max = s3;
    if (min > s4 )
        min = s4;
    if (max < s4)
        max= s4;
    if ( min > s5)
        min = s5;
    if ( max < s5)
        max = s5;
        
    printf( "%ld %ld " , min , max);
    
    
    return 0;
}
