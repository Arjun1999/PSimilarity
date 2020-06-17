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
    long int e,x[5],max=0,min=x[0];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    x[0]=a+b+c+d;
    x[1]=a+c+d+e;
    x[2]=b+c+d+e;
    x[3]=a+b+d+e;
    x[4]=a+b+c+e;
    for(int i=0;i<5;i++)
      {
        if(max<x[i])
            max=x[i];
    }
    for(int i=0;i<5;i++)
      {
        if(min>x[i])
            min=x[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
