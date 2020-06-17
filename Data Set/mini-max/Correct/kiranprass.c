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
    long int e,f,g,h,i,j;
    long int min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    f=b+c+d+e;
    g=a+c+d+e;
    h=a+b+d+e;
    i=a+b+c+e;
    j=a+b+c+d;
    //printf("%ld %ld %ld %ld %ld",f,g,h,i,j);
    long int k[5]={f,g,h,i,j};
    max=k[0];
    min=k[0];
    for(i=0;i<5;i++)
        {
        if(k[i]>max)
            {
            max=k[i];
        }
        if(k[i]<min)
            {
            min=k[i];
        }
    }
    
    printf("%ld %ld",min,max);
    return 0;
}
