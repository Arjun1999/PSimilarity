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
    long long int e,key;
    long long int f[5];
    int i,j;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    f[0]=a+b+c+d;
    f[1]=b+c+d+e;
    f[2]=a+c+d+e;
    f[3]=a+b+d+e;
    f[4]=a+b+c+e;
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
        if(f[i]>f[j])
        {
        key=f[i];
        f[i]=f[j];
        f[j]=key;
    }
printf("%lld %lld",f[0],f[4]);    
        
    
    
    return 0;
}
