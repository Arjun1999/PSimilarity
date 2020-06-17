#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,sum=0,min=0,max=0; 
  long   long int b,c,d,e,i,g[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=sum+a+b+c+d+e;
    g[0]=a;g[1]=b;g[2]=c;g[3]=d;g[4]=e;
    max=min=g[0];
       for(i=0;i<5;i++)
           
    { if(max<g[i])
        max=g[i];
    
     
     if(min>g[i])
         min=g[i];
     
    }
    printf("%lld %lld",sum-max,sum-min);
    
    
    return 0;
}
