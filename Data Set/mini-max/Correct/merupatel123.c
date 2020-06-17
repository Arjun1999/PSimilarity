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
    
     
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int al[5] = {a,b,c,d,e};
    long int sum[5] = {0,0,0,0,0};
    
    int i,j;
    
    for(i=0;i<5;i++)
    {
     for(j=0;j<5;j++)
     {
       if(j!=i)
       {
           sum[i]+=al[j];
       }   
     }   
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(sum[i]<=sum[j])
            {
                long int n = sum[i];
                sum[i]=sum[j];
                sum[j] = n;
            }
        }
    }
    
    printf("%ld %ld",sum[0],sum[4]);
    
   
    return 0;
}
