#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,i;
    long long int max,min,t;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int ar[]={a,b,c,d,e};
    min=ar[0];
    max=ar[0];
    for(i=1;i<=4;i++)
        {
        if(ar[i]<min)
            min=ar[i];
        if(ar[i]>max)
            max=ar[i];
    }
    t=max;
    max=a+b+c+d+e-min;
    min=a+b+c+d+e-t;
    printf("%lld %lld",min,max);
    
    return 0;
}
