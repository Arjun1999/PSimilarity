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
    long int f[5],i,j,k,l,temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    f[0]=a;
    f[1]=b;
    f[2]=c;
    f[3]=d;
    f[4]=e;
    for(i=0;i<4;i++)
        {
        for(j=0;j<4-i;j++)
            {
            
        if(f[j]>f[j+1])
            {
            temp=f[j];
            f[j]=f[j+1];
            f[j+1]=temp;
        }
      }
    }
    k=f[0]+f[1]+f[2]+f[3];
    
    l=f[1]+f[2]+f[3]+f[4];
    printf("%ld %ld",k,l);
    
    return 0;
}
