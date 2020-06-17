#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int x; 
    long int b; 
    long int c; 
    long int d;
    long int e; 
    long int a[5], i;
    long int min, max;
    scanf("%ld %ld %ld %ld %ld",&x,&b,&c,&d,&e);
    a[0]=x+b+c+d;
    a[1]=b+c+d+e;
    a[2]=c+d+e+x;
    a[3]=d+x+b+e;
    a[4]=e+x+b+c;
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i] >max)
        {  max=a[i];} 
        if(a[i]<min)
        { min=a[i];} 
    }
                 
printf("%ld %ld", min, max) ;
    return 0;
}
