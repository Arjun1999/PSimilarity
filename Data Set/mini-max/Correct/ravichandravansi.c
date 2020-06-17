#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],b[5],c[5]; 
    /*long int b; 
    long int c; 
    long int d;
    long int e;
    */
    int i,j=0;
    long long int sum=0,min,max;
    for(int i=0;i<5;i++)
      scanf("%lld",&a[i]);
    for( i=0;i<5;i++){
        sum=0;
      for( j=0;j<5;j++)
           if(j!=i)
            sum=sum+a[j];
             b[i]=sum;      
        
       }
       i=0;
     min=b[i];
    max=b[i];
    for( i=0;i<5;i++)
      if(min>b[i])
         min=b[i];
    for( i=0;i<5;i++)
      if(max<b[i])
         max=b[i];
      printf("%lld %lld",min,max);
    
    
    return 0;
}
