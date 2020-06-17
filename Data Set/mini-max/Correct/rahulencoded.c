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
    int i=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int z[5];
    z[0]=a;
    z[1]=b;
    z[2]=c;
    z[3]=d;
    z[4]=e;
    long int max=z[0];
    long int min=z[0];
    long int sum=0;
    
    for(i=0;i<5;i++)
    {
        if(z[i]>max)
            max=z[i];
        if(z[i]<min)
            min=z[i];
            
    }
    sum=a+b+c+d+e;
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
