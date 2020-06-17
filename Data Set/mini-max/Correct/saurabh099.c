#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);*/
     long int a[5],s,f,t;
     int i,j;
    
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
        }
    for(i=0;i<5;i++)
        {
        for(j=0;j<4;j++)
            {
            if(a[j]>a[j+1])
                {t=a[j];
                  a[j]=a[j+1];
                   a[j+1]=t;}
        }
    }
    s=a[0]+a[1]+a[2]+a[3];
    f=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",s,f);
    
    return 0;
}
