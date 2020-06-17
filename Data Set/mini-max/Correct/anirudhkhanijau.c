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
   long long int e;
   long long int sum[5],j,min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0]=b+c+d+e;
    sum[1]=a+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+b+c+d;
    min=max=sum[0];
   for(int i=0;i<5;i++)
   {  for(j=0;j<5;j++)
        {
        if(min>sum[j])
            {
            min=sum[j];
        }
         if(max<sum[j])
             {
             max=sum[j];
         }
    }
   }
    
    printf("%lld %lld",min,max);
    
        
    
    
    return 0;
}
