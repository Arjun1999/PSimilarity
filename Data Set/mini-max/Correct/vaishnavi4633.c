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
    long int small,small1,big,big1,min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
   big = a>b?(a>c?a:c):(b>c?b:c) ;
   big1 = big>d?(big>e?big:e):(d>e? d:e);
   small= a<b?(a<c?a:c):(b<c?b:c) ;
   small1 = small<d?(small<e?small:e):(d<e? d:e);
    min=a+b+c+d+e-big1;
    max=a+b+c+d+e-small1;
    printf("%ld %ld",min,max);
    return 0;
}
