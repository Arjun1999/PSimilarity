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
    long int x[5]={a,b,c,d,e};
     long int min;
    min=x[0];
    for(int i=0;i<5;i++)
        {
       
        
        if(min>x[i])
            {
            min=x[i];
        }
        
    }
    long int max;
    max=x[0];
    for(int i=0;i<5;i++)
        {
        if(max<x[i])
            {
            max=x[i];
        }
    }
    printf("%ld %ld",a+b+c+d+e-max,a+b+c+d+e-min);
    return 0;
}
