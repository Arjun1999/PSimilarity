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
    long int max=0;
    long int min=0;
    long int value[5];
    for(int k=0;k<5;k++)
        scanf("%ld",&value[k]);
    //scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    for(int i=0;i<4;i++)
        {
           for(int j=0;j<4-i;j++)
               {
                   if(value[j]>value[j+1])
                       {
                          long int temp=value[j];
                          value[j]=value[j+1];
                          value[j+1]=temp;
                       }
                }
         }
       for(int i=0;i<4;i++)
           {
             max=max+value[i+1];
             min=min+value[i];
              
       }
     
       printf("%ld %ld",min,max);
    
    return 0;
}
