#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int k[5],max,min,i;
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max=min=k[0]=a+b+c+d;
    k[1]=a+b+c+e;
    k[2]=a+b+d+e;
    k[3]=a+c+d+e;
    k[4]=b+c+d+e;
    for(i=0;i<5;i++)
        {
        if(min>k[i])
            min=k[i];
        if(max<k[i])
            max=k[i];
    }
    printf("%lld %lld",min,max);    
    return 0;
}
