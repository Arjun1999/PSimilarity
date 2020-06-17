#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int f[10],temp,sum=0,sum1=0;
    int i,j;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    f[0]=a;
    f[1]=b;
    f[2]=c;
    f[3]=d;
    f[4]=e;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
        {
           if(f[i]>f[j])
               {
               temp=f[i];
               f[i]=f[j];
               f[j]=temp;
           }
        }   
    }
    for(i=0;i<4;i++)
        {
        sum=sum+f[i];
    }
    for(i=1;i<5;i++)
        {
        sum1=sum1+f[i];
    }
    printf("%ld %ld",sum,sum1);
    return 0;
}
