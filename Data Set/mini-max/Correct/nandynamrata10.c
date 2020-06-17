#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long long a,ar[5]; 
    long long b; 
    long long c; 
    long long d;
    long long e,sum1=0,sum2=0,t;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if(a,b,c,d,e>=1 && a,b,c,d,e<=1000000000)
        { 
        ar[0]=a;
        ar[1]=b;
        ar[2]=c;
        ar[3]=d;
        ar[4]=e;
        for(i=0;i<4;i++)
           {
               for(j=0;j<4-i;j++)
                   {
                   if(ar[j]>ar[j+1])
                       {
                       t=ar[j];
                        ar[j]=ar[j+1];
                        ar[j+1]=t;
                   }
               }
           }
        
        for(i=0;i<4;i++)
            sum1+=ar[i];
        printf("%lld ",sum1);
        
        for(i=1;i<5;i++)
            sum2+=ar[i];
        printf("%lld",sum2);
    }
    return 0;
}
