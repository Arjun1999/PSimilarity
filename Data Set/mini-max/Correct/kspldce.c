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
    long int e,mx,mn,t;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int a1[5];
    a1[0]=a;
    a1[1]=b;
    a1[2]=c;
    a1[3]=d;
    a1[4]=e;
    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
        if(a1[i]>a1[j])
        {t=a1[i];
        a1[i]=a1[j];
        a1[j]=t;}
    for(int i=0;i<5;i++)
        {
        if(i!=0)
            mn+=a1[i];
        if(i!=4)
            mx+=a1[i];
    }
    printf("%lld %lld",mx,mn);
    return 0;
}
