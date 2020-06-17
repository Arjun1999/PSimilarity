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
    long int temp,g[10];
    int i,j;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    g[0]=a+b+c+d;
    g[1]=a+b+c+e;
    g[2]=a+c+d+e;
    g[3]=a+b+d+e;
    g[4]=b+c+d+e;   
    
        for(i=0;i<5;i++)
   {
            for(j=i+1;j<5;j++)            
            {
                if(g[i]>g[j])
                 {
                        temp=g[i];
                        g[i]=g[j];
                        g[j]=temp;
                }   
        }     
        }
    printf("%ld %ld",g[0],g[4]);
    
        return 0;
}
