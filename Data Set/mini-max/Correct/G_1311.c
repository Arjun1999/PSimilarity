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
    long int e,m[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    m[0]=b+c+d+e;
    m[1]=a+c+d+e;
    m[2]=a+b+d+e;
    m[3]=a+b+c+e;
    m[4]=a+b+c+d;
long int min=m[0],max=0;
    for(int i =0;i<5;i++)
        {
        if(min>m[i])
            min=m[i];
        if(max<m[i])
            max=m[i];
        
    }
    printf("%ld %ld",min,max);
    return 0;
}
