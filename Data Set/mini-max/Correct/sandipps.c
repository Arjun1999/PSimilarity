#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,max,min; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int k[5];
    k[0]=a+b+c+d;
    k[1]=a+c+d+e;
    k[2]=a+b+d+e;
    k[3]=a+b+c+e;
    k[4]=b+c+d+e;
    int i;
    max=k[0];min=k[0];
    for(i=1;i<5;i++)
        {
        if(k[i]>max)
            max=k[i];
        if(k[i]<min)
            min=k[i];
    }
    printf("%lld %lld",min,max);
        return 0;
}
