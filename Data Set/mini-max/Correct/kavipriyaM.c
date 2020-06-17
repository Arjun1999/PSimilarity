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
    long int x[5];
    long int max=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    x[0]=a+b+c+d;
    x[1]=a+b+c+e;
    x[2]=a+b+e+d;
    x[3]=a+c+e+d;
    x[4]=b+c+d+e;
    long int min=x[0];
    for(int i=0;i<5;i++)
        {
        if(x[i]>max)
            {
            max=x[i];
        }
        if(x[i]<min)
            {
            min=x[i];
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}
